def count_smileys(arr):
    smileys = [';', ':', '-', '~', ')', 'D']
    result = 0
    for i in arr:
        for j in i:
            if j in smileys:
                result+=1
    return result