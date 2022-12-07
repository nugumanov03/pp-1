# a  = input()
bl = []
k=''
while(True):
    k = int(input())
    if(k < 0):
        break
    bl.append( k )
   

# print(bl.__len__())
sum = 0
for i in bl:
    sum = sum + i
    # print(i, " ")

print(sum)