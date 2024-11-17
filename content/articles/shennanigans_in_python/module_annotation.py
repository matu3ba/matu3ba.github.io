# using 'module: ModuleType' via specifying ModuleType as set of types not possible
def check_fn(module: object) -> int:
  if str(type(module)) != "module":
    return 1
  return 0
