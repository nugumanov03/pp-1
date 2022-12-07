# first solution

m = int(input())
n = int(input())

if m < n:
    i = m
    while i < n:
        print(i)
        i = i +2
else :
    i = m
    while i > n:
        print(i)
        i = i -2



# second solution
# m = int(input())
# n = int(input())

# if m < n:
#     i = m
#     while i < n :
#         if i %2==1:
#             print(i)
#         i = i +1
# else :
#     i = m
#     while i > n:
#         if i %2==1:
#             print(i)
#         i = i -1


# if input first num - even : there is no solution without if else statement or do like this

# m = int(input())
# n = int(input())

# if m < n:
#     i = m
#     while i < n:
#         while ((i%2==1) and (i < n)):
#             print(i)
#             i = i +1
#         i = i +1
# else :
#     i = m
#     while i > n:
#         while ((i%2==1) and (i > n)):
#             print(i)
#             i = i -1
#         i = i -1

# we can also change if m < n as while loop ,because while loop use if statements
        

