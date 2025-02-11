def get_sum(a, b):
    count = 0
    for i in range(min(a, b), max(a,b)+1):
        count+=i
    return count
    