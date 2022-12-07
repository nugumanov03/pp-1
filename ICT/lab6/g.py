def isdigit(n):
    arr = ['0','1' ,'2' ,'3' ,'4' ,'5' ,'6' ,'7' ,'8' ,'9']
    if n in arr:
        return True
    return False

def sum_num(s):
    sum = 0
    for i in s:
        if isdigit(i):
            sum+=int(i)
    return sum


s = input()
print(sum_num(s))