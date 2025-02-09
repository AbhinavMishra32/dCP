def square_digits(num):
    L= []
    for i in [int(x) for x in str(num)]:
        str(L.append(i**2))
    return '-'.join(L)