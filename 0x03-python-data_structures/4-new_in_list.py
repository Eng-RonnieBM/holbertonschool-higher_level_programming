#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if (my_list is None):
        return ()
    if 0 < idx > len(my_list):
        return (my_list)
    copy = list(my_list)
    copy[idx:idx+1] = [element]
    return(copy)
