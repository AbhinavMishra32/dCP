def remove(s, n):
    s =str(s)
    for j in range(n):
        for character in s:
            if j>=0:
                if character =="!":
                    s.replace("!", "")
                n=-1
    return s

print(remove("hello!!", 2))