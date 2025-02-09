L = [23, 53, 13, 7, 0, 3]
def merge_sort(L):
    while len(L)>=1:
        print(L)
        L = L[:len(L)//2]
        merge_sort(L)


merge_sort(L)