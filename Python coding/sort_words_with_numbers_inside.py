def order(sentence):
    words = sentence.split()
    arranged_words = []

    for word in words:
        for letter in word:
            if letter.isdigit():
                position = int(letter)-1
                arranged_words[position] = word
    return ''.join(arranged_words)