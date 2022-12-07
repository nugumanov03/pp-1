mas = list(map(int, input().split()))
max = 0
min = 12312123
for i in mas:
    if max < i:
        max= i
    if min > i:
        min = i

print(min,max)