def isSubSequence(str1, str2):
    i, j = 0, 0
    while j < len(str2):
        if(i == len(str1)):
             return True
        elif str1[i] == str2[j]:
            i += 1
            j += 1
        else:
            j += 1
    return True if i == len(str1) else False