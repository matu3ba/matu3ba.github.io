import json


# Dict -> str is inconsistent to json -> str, so workaround with
# dict_asjson_lower = str(dict1).replace("'", '"')
def combineDictsFromStr() -> None:
  dict1 = {"t1": "val1", "t2arr": [{"t2_int": 0, "t2_str": "12.0"}], "t3int": 30}
  dict1_str_raw = str(dict1)
  dict1_str = dict1_str_raw.replace("'", '"')
  dict2_str = '{"anotherone":"yes", '
  dict2_str += '"t3int":30,"t4str":'
  dict2_str += dict1_str + "}"
  dict2 = json.loads(dict2_str)
  _ = dict2