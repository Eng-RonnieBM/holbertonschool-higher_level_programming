def multiply_by_2(a_dictionary):
    new_dict = {}
    for val in a_dictionary:
        new_dict[val] = a_dictionary[val] * 2
    return new_dict
