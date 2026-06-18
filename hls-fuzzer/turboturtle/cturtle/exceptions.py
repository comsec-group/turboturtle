class ProgGenException(Exception):
    """Exception raised during program generation."""
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)