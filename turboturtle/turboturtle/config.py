import tomli

from pathlib import Path

import turboturtle.cturtle.statement as statements
import turboturtle.cturtle.expression as expressions
from turboturtle.cturtle.data_type import DataType
from turboturtle.cturtle.strategy import GenerationStrategy, DataflowStrategy


class Config:
    def __init__(self) -> None:
        pass

    def _mkdir_parents_ignore_permission(self, path: Path) -> None:
        parts = path.parts
        if not parts:
            return

        current = Path(parts[0])
        try:
            current.mkdir(exist_ok=True)
        except PermissionError:
            pass

        for part in parts[1:]:
            current = current / part
            try:
                current.mkdir(exist_ok=True)
            except PermissionError:
                pass

    def load(self, config_file: Path):
        self.config_file = config_file

        with open(config_file, "rb") as fp:
            config_dict = tomli.load(fp)

        self.disable_reduction = bool(config_dict["disable_reduction"])
        self.cleanup = bool(config_dict["cleanup"])
        self.keep_vcd_files = bool(config_dict.get("keep_vcd_files", False))
        self.backup = bool(config_dict["backup"])
        self.design_types = config_dict["design_types"]
        self.num_designs = int(config_dict["num_designs"])
        self.proggen_max_retries = int(config_dict["proggen_max_retries"])
        self.proggen_timeout_s = int(config_dict["proggen_timeout_s"])

        self.working_dir = Path(config_dict["working_dir"])
        self.backup_dir = Path(config_dict["backup_dir"])

        self._mkdir_parents_ignore_permission(self.working_dir)
        self._mkdir_parents_ignore_permission(self.backup_dir)

        self.dynamatic_path = str(config_dict["dynamatic_path"])

        self.eda_server_remote = str(config_dict["eda_server_remote"])
        self.eda_server_remote_python_version = str(config_dict["eda_server_remote_python_version"])
        self.eda_server_remote_dir_base = str(config_dict["eda_server_remote_dir_base"])
        self.eda_server_remote_questa_dir_base = f"{self.eda_server_remote_dir_base}/questa"
        self.eda_server_remote_multi_sim_num_processes = int(
            config_dict["eda_server_remote_multi_sim_num_processes"]
        )

        self.top_fn_name = str(config_dict["top_fn_name"])
        self.num_processes = int(config_dict["num_processes"])
        self.num_processes_proggen = int(config_dict["num_processes_proggen"])

        self.bambu_hls_rules = config_dict["bambu_hls_rules"]

        self.shuffle_strategies = bool(config_dict["shuffle_strategies"])
        self.generation_strategy = GenerationStrategy[
            config_dict["generation_strategy"]
        ]
        self.dataflow_strategy = DataflowStrategy[config_dict["dataflow_strategy"]]

        self.randomize_num_fn_args = bool(config_dict["randomize_num_fn_args"])

        self.statement_types_and_weights: dict[type[statements.Statement], int] = {}
        self.statement_types: list[type[statements.Statement]] = []

        self.min_num_statements = int(config_dict["min_num_statements"])
        self.max_num_statements = int(config_dict["max_num_statements"])

        self.internal_arrays = bool(config_dict["internal_arrays"])
        self.linearization = bool(config_dict["linearization"])

        self.allowed_expressions: list[type[expressions.Expression]] = [
            getattr(expressions, expr) for expr in config_dict["allowed_expressions"]
        ]

        self.no_mod_in_array_access = bool(config_dict["no_mod_in_array_access"])

        for stmt_and_weight in config_dict["all_statements_and_weigths"]:
            self.statement_types.append(getattr(statements, stmt_and_weight["name"]))
            self.statement_types_and_weights[
                getattr(statements, stmt_and_weight["name"])
            ] = stmt_and_weight["weight"]

        self.expression_types_and_weights: dict[type[expressions.Expression], int] = {}
        for expr_and_weight in config_dict["all_expressions_and_weights"]:
            self.expression_types_and_weights[
                getattr(expressions, expr_and_weight["name"])
            ] = expr_and_weight["weight"]

        self.secret_control_flow = bool(config_dict["secret_control_flow"])
        self.secret_memory_accesses = bool(config_dict["secret_memory_accesses"])
        self.all_data_types = [
            DataType[data_type] for data_type in config_dict["all_data_types"]
        ]
        self.has_logical_and_expression = bool(config_dict["has_logical_and_expression"])
        self.has_logical_or_expression = bool(config_dict["has_logical_or_expression"])

        self.has_float = bool(config_dict["has_float"])
        self.allow_sub_functions = bool(config_dict["allow_sub_functions"])
        self.has_float_unsigned_casts = bool(config_dict["has_float_unsigned_casts"])
        self.has_float_long_casts = bool(config_dict["has_float_long_casts"])
        self.float_to_base_int_casts_only = bool(config_dict["float_to_base_int_casts_only"])
        self.base_int_div_only = bool(config_dict["base_int_div_only"])
        self.base_int_mod_only = bool(config_dict["base_int_mod_only"])

        # # TODO: if we need this with other strategies, it needs to be implemented in function.py
        # if not self.has_float_long_casts or not self.has_float_unsigned_casts:
        #     if not self.generation_strategy is GenerationStrategy.DEPENDENCY_CHAIN or not self.dataflow_strategy is DataflowStrategy.SEPARATED:
        #         print(
        #             "[ERROR] Disabling float to long/unsigned casts is currently only supported with DEPENDENCY_CHAIN generation strategy and SEPARATED dataflow strategy."
        #         )
        #         exit(1)

    def reload(self, config_file: Path):
        self.load(config_file)


CONFIG = Config()

# with open(TT_CONFIG_FILE, "rb") as fp:
#     config_dict = tomli.load(fp)


# DISABLE_REDUCTION = bool(config_dict["disable_reduction"])
# CLEANUP = bool(config_dict["cleanup"])
# BACKUP = bool(config_dict["backup"])
# DESIGN_TYPES = config_dict["design_types"]
# NUM_DESIGNS = int(config_dict["num_designs"])
# WORKING_DIR = Path(config_dict["working_dir"])
# BACKUP_DIR = Path(config_dict["backup_dir"])
# TOP_FN_NAME = config_dict["top_fn_name"]
# NUM_PROCESSES = config_dict["num_processes"]

# GENERATION_STRATEGY = GenerationStrategy[config_dict["generation_strategy"]]
# DATAFLOW_STRATEGY = DataflowStrategy[config_dict["dataflow_strategy"]]

# STATEMENT_TYPES_AND_WEIGHTS: dict[type[statements.Statement], int] = {}
# STATEMENT_TYPES: list[type[statements.Statement]] = []

# MIN_NUM_STATEMENTS = int(config_dict["min_num_statements"])
# MAX_NUM_STATEMENTS = int(config_dict["max_num_statements"])

# for dict in config_dict["all_statements_and_weigths"]:
#     STATEMENT_TYPES.append(getattr(statements, dict["name"]))
#     STATEMENT_TYPES_AND_WEIGHTS[getattr(statements, dict["name"])] = dict["weight"]

# SECRET_CONTROL_FLOW = bool(config_dict["secret_control_flow"])
# ALL_DATA_TYPES = [DataType[data_type] for data_type in config_dict["all_data_types"]]
# ALLOW_SUB_FUNCTIONS = bool(config_dict["allow_sub_functions"])
