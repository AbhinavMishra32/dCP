def stray(arr):
    for i in arr:
        if arr.count(i)==1:
            return i
    pass
print(stray([17, 17, 3, 17, 17, 17, 17]))   