# a  = input()
bl = []
k=''
while(True):
    k = input()
    if(k == 'stop' or k == "enough"):
        break
    bl.append( k )
   

print(bl.__len__())
# for i in bl:
#     print(i, " ")