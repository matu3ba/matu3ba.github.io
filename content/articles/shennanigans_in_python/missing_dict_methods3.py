import copy
from typing import Optional, List


def merge_dicts(alpha: dict = {}, beta: dict = {}) -> dict:
  """
  Recursive merge dicts. Not multi-threading safe.
  """
  return _merge_dicts_aux(alpha, beta, copy.copy(alpha))


def _merge_dicts_aux(alpha: dict = {}, beta: dict = {}, result: dict = {}, path: Optional[List[str]] = None) -> dict:
  if path is None:
    path = []
  for key in beta:
    if key not in alpha:
      result[key] = beta[key]
    else:
      if isinstance(alpha[key], dict) and isinstance(beta[key], dict):
        # key value is dict in A and B => merge the dicts
        _merge_dicts_aux(alpha[key], beta[key], result[key], path + [str(key)])
      elif alpha[key] == beta[key]:
        # key value is same in A and B => ignore
        pass
      else:
        # key value differs in A and B => raise error
        err: str = f"Conflict at {'.'.join(path + [str(key)])}"
        raise Exception(err)
  return result
