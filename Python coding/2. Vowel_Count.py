def get_count(sentence):
    vowels = ['a', 'e', 'i', 'o', 'u']
    count = 1
    for i in sentence:
        if i in list(vowels):
            count =+1
    return count
