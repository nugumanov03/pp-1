def is_teen(age):
    if 12<age < 17:
        return True
    return False

age = int(input())
if is_teen(age):
    print("True")
else:
    print("False")