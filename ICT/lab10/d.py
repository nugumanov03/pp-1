word = list(map(str,input().split(",")))
for i in range(len(word)):
    word[i] = word[i].lower()
answ = []
for i in reversed(range(len(word))):
    tmp = word[i]
    word.pop(i)
    if tmp in word:
        answ.append("yes")
    else:
        answ.append("no")
for i in reversed(answ):
    print(i)