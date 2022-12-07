g = int(input())
arr2d = []
for i in range(g):
    k = list(map(int , input().split()))
    arr2d.append(k)

for i in range(g):
    for j in range(g):
        print(arr2d[j][i], end=' ')
    print()