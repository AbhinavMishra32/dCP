import math
def sum_dig_pow(a,b):
    for num in range(a, b):
        n_list = [x for x in range(a,b)]
        num_str = str(num)
        num_map = map(int, num_str)
        num_int_list = list(num_map)
        result = []
        
    for j in n_list:
            j_int_list = list(map(int, (str(j))))
            for i in range(0,len(j_int_list)-1):
                power_list = []
                power_list.append(int(math.pow(j_int_list[i], i+1)))
                if j_int_list == sum(power_list):
                    result.append(n_list[n_list.index(j)])
    return result
        
    '''we need to make a 2D list then use the 
    index of the founded number to append the original 
    number as a wholel from the 1st dimension of the 2nd 
    dimension number to the final result list.'''

print(sum_dig_pow(0,10))