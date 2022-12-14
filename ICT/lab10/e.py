first = list(map(int,input().split()))
second = list(map(int,input().split()))
lis = set()
for i in first:
    if i in second:
        lis.add(i)
print(*lis)