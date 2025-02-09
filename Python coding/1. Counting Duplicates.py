def duplicate_count(text):
    text = text.lower()
    count = 0
    for i in set(text):
        if text.count(i) >1:
            count +=1
    return count