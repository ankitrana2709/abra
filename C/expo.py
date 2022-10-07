#friends = ["Jim", "Karen", "Kevin"]
#for index in range(len(friends)):
#   print(friends[index])
'''for index in range(5):
    if index == 0:
        print("first")
    else:
        print("not")'''

#exponent function
def expo(base_number, pow_number):
    result = 1
    for index in range(pow_number):
        result = result * base_number
    return result
a = int(input("base number: "))
b = int(input("power number: "))
print(expo(a, b))