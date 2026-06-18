class TurboturtleException(Exception):
    def __init__(self, message: str = ""):
        self.message = message
        super().__init__(message)


class InvalidConfigException(TurboturtleException):
    pass


class SubprocessException(TurboturtleException):
    pass


class CMDArgsParsingException(TurboturtleException):
    pass


class CFuzzerException(TurboturtleException):
    pass


class HLSToolNotSupportedException(TurboturtleException):
    pass


class HLSRuleApplicationException(TurboturtleException):
    pass


class ReductionException(TurboturtleException):
    pass


class HLSSynthesisException(TurboturtleException):
    pass


class SlangCompilationException(TurboturtleException):
    pass


class TopModulePortsNotFoundException(TurboturtleException):
    pass


class ClockNotFoundException(TurboturtleException):
    pass


class MissingModuleParsingException(TurboturtleException):
    pass


class InitialAssignmentParsingException(TurboturtleException):
    pass


class MissingModulePortDirectionRetrievalException(TurboturtleException):
    pass


class TopFnInterfaceParsingException(TurboturtleException):
    pass


class TopFNtoModuleInterfaceMappingException(TurboturtleException):
    pass


class CombinationalDesignException(TurboturtleException):
    pass

class TestbenchRenderingException(TurboturtleException):
    pass


class VerilationException(TurboturtleException):
    pass


class SolverNotSupportedException(TurboturtleException):
    pass


class VerificationException(TurboturtleException):
    pass


class SanityCheckingException(TurboturtleException):
    pass
