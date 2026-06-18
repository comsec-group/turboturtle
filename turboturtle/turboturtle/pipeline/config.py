from pathlib import Path


class PipelineConfig:
    def __init__(
        self,
        name: str,
        top_fn_name: str,
        out_dir: Path,
        backup_dir: Path,
        backup: bool,
        cleanup: bool,
    ):
        self.name = name
        self.top_fn_name = top_fn_name
        self.out_dir = out_dir
        self.backup_dir = backup_dir
        self.backup = backup
        self.cleanup = cleanup
