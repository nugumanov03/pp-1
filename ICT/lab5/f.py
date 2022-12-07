# a  = input()
bl = []
k=''
cnt = 0
while(True):
    k = int(input())
    if(k < 0 and k >5):
        break
    bl.append( k )
   

# print(bl.__len__())
# sum = 0
for i in bl:
    # sum = sum + i
    if( i ==5):
        cnt += 1
    # print(i, " ")

print(cnt)