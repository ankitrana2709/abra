#is_male = bool(input("You are a male. True or False?"))
#is_tall = bool(input("You are tall. True of False?"))
'''is_male = False
is_tall = True

if is_male and is_tall:
    print("You are a male and are tall")
elif is_male and not(is_tall):
    print("is a male but not tall")
elif is_tall and not(is_male):
    print("You are tall but not male")
else:
    print("you are not tall and not a male.")'''

def max_num(num1,num2,num3):
    if num1 >= num2 and num1 >= num3:
        return num1
    elif num2 >= num1 and num2 >= num3:
        return num2
    else:
        return num3
num1 = input("First number: ")
num2 = input("Second no. ")
num3 = input("third no. ")
print(max_num(num1, num2, num3))

#while loop
i = 1
while i <= 10:
    print(i.)
    i += 2