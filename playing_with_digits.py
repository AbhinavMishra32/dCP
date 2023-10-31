import math
def dig_pow(n,p):
    n_list = [int(x) for x in str(n)]
    power_list = []
    for i in range(0, len(n_list)):
        power_list.append(int(math.pow(n_list[i], p+i)))
    #sum(power_list)/n
    if (sum(power_list)/n).is_integer():
        #print('k exists')
        return sum(power_list)//n
    else:
        #print('k doesnt exist')
        return -1
    #return power_list
    #return -1
print(dig_pow(46288, 3))