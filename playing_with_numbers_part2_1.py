import time
start = time.time()
import math
def sum_dig_pow(a,b):
    int_range_list = list(range(a,b+1))
    result = []
    
    for i in int_range_list:
        power_list = []
        i_str = str(i)
        for j in range(len(i_str)):
            digit = int(i_str[j])
            power_list.append(math.pow(digit, j + 1))
    
        if i == sum(power_list):
            result.append(i)
    return result

print(sum_dig_pow(1,20000000))

end = time.time()

print(end-start)
