L = [23, 42, 512, 1, 0]
j=0
while L[0] != max(L):
    j+=1
    for i in range(0, len(L)-1):
        if L[i] <= L[i+1]:
            lower = L[i]
            higher = L[i+1]
            L[i] = higher
            L[i+1] = lower
    print(L)