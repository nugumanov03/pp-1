k = int(input())
li = []
for i in range(k):
    g = list(map(int , input().strip().split()))
    # g = []
    # for j in range(k):
    #     c = int(input()) 
    #     g.append(c)
    li.append(g)
sum = 0
for i in range(k):
    for j in range(k):
        if i == j:
            sum+= li[i][j]
print(sum)