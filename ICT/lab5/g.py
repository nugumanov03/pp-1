n = int(input())
cnt = 0
while( n>= 25):
    n = n - 25
    cnt +=1

while(n>= 10):
    n = n - 10
    cnt +=1
while(n>= 5):
    n= n- 5
    cnt+=1
cnt+=n

print(cnt)
