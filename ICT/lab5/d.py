# a  = input()
bl = []
k=''
while(True):
    k = int(input())
    if(k%7 !=0 ):
        break
    bl.append( k )
   

# print(bl.__len__())
for i in bl:
    print(i, " ")