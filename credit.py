'''from cs50 import get_int, get_string'''
def get_string(prompt):
    if type(prompt) is not str:
        raise TypeError("prompt must be of type str")
    try:
        return input(prompt)
    except EOFError:
        return None

Number = get_string("Number: ")
copy_Number = Number[::-1]
uptil_second_last = sum([(int(x) * 2) // 10 + ((int(x) * 2) % 10) for x in copy_Number[1::2]])
rest_numbers = sum([int(y) for y in copy_Number[0::2]])
sum = (uptil_second_last + rest_numbers)
print(sum)

if sum % 10 == 0:
    if len(Number) == 15 and Number[0:2] in ['34','37']:
        print("AMEX")
    elif len(Number) == 16 and Number[0:2] in ['51']:
        print("MASTERCARD")
    elif len(Number) in [13,16] and Number[0] == '4':
        print("VISA")
else:
    print("INVALID")