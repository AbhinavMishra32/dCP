def binary_search(list, target):
    first= 0
    last = len(list)-1
    
    while first <= last:
        steps = 0
        midpoint = (first + last) //2
        if list[midpoint] == target:
            return midpoint
        elif list[midpoint] < target:
            first = midpoint +1
            steps += 1
            #print("number of steps: {}".format(steps))
        elif list[midpoint] > target:
            last = midpoint -1
            steps +=1
            #print("number of steps: {}".format(steps))
        print("number of steps: {}".format(steps))
    return None

print(binary_search([x for x in range(10000)], 600)  )