my_list = list(map(int, input().split()))

def fun(my_list):
    for i in my_list:
        if i == 777:
            print("True")
            return
    print("False")
    return
fun(my_list)