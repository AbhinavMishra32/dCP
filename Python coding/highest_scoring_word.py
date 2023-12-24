def high(given_str):
    letters = 'abcdefghijklmnopqrstuvwxyz'
    letters = list(letters)
    dic = {letters[i-1]: i for i in range(1, len(letters)+1)}
    #given_str = 'Hello how are you'
    given_str = given_str.lower().split(' ')

    list_of_points = []
    #max function:
    word_list = []
    for word in given_str:    
        letter_point_list = []
        for letter in word: 
            if letter in dic:
                points = dic[letter]
                letter_point_list.append(points)
                #print(letter_point_list)
        word_list.append(letter_point_list) 
    final_count_list=[]
    for c in word_list:
        sum_points = 0
        sum_points += sum(word_list[word_list.index(c)])
        #print(sum_points)
        final_count_list.append(sum_points)
    
    #have to find index of the max value in final_count_list and return the value from that index in word_list
    max_index = final_count_list.index(max(final_count_list))
    #print(max_index)
    return given_str[max_index]

    #return [list_of_points.index(max(list_of_points))]
    return final_count_list#,word_list, given_str
    '''points = 0
            if k == 'a':
                points+=1
            elif k == 'b':
                points +=2
            elif k == 'c':
                points +=3'''
    
print(high('Hello how are you'))
            
