def has_fieldsvals(small: dict, big: dict) -> bool:
    """
    Test, if 'small' has all values of of 'big'
    Example: big = {'pl' : 'key1': {'key2': 'value2'}}
    Then small = {'pl' : 'key1': {'key2': 'value2'}, 'otherkey'..} matches,
    small = {'pl' : 'key1': {'key2': 'value2', 'otherkey'..}} matches,
    and small = {'pl' : 'key1': {'key2': {'value2', 'otherkey'..}}} matches.
    """
    for key, value in small.items():
        if key in big:
            if isinstance(small[key], dict):
                if not has_fieldsvals(small[key], big[key]):
                    return False
                else:
                    return True
            elif value != big[key]:
                return False
            else:
                return True
        else:
            return False
    return True