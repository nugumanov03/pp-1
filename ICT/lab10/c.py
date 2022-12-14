n = int(input())
num = []
for i in range (n):
    tmp = list(map(int,input().split()))
    for j in tmp:
        if j not in num:
            num.append(j)
print(len(num))