def is_subdict(small: dict, big: dict) -> bool:
    """
    Test, if 'small' is subdict of 'big'
    Example: big = {'pl' : 'key1': {'key2': 'value2'}}
    Then small = {'pl' : 'key1': {'key2': 'value2'}, 'otherkey'..} matches,
    but small = {'pl' : 'key1': {'key2': 'value2', 'otherkey'..}}
    or small = {'pl' : 'key1': {'key2': {'value2', 'otherkey'..}}} not.
    """
    # since python3.9:
    # return big | small == big
    # also:
    # return {**big, **small} == big
    return dict(big, **small) == big