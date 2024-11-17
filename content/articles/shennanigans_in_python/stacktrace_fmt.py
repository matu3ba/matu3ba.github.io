import traceback


def getStackTrace() -> str:
  return repr(traceback.format_stack())