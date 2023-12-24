def high(given_str):
    letters = 'abcdefghijklmnopqrstuvwxyz'
    letters = list(letters)
    dic = {letters[i-1]: i for i in range(1, len(letters)+1)}
    #given_str = 'Hello how are you'
    given_str = given_str.lower().split(' ')

    list_of_points = []
    #max function:
    for j in given_str:
        for k in j:
            points =0
            if k in dic:
                points += dic[k]
            list_of_points.append(points)
    return given_str[list_of_points.index(max(list_of_points))]
    '''points = 0
            if k == 'a':
                points+=1
            elif k == 'b':
                points +=2
            elif k == 'c':
                points +=3'''
                



