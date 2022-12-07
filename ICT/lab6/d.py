def summa_nt(n):
    sum = 0
    for i in range(n+1):
        sum+=i
    return sum

k = int(input())
print("I know that the sum of the numbers from 1 to",k ," is ", summa_nt(k))