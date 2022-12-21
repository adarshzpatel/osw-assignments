# print sum of digits 
def sumOfDigits(str):
    if(str == ''):
        return 0
    return int(str[0]) + sumOfDigits(str[1:])

x = input("Enter a number ")


output = sumOfDigits(x)

print("output is ",output)
    