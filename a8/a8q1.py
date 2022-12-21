

def stringToNumber(str,output):
    if(str == ''):
        return output;    
    return stringToNumber(str[1:],10*output + ord(str[0])-ord('0'))


# print sum of digits 
def sumOfDigits(str):
    if(str == ''):
        return 0
    return int(str[0]) + sumOfDigits(str[1:])

x = input("Enter a number ")


output = stringToNumber(x,0)

print("output is ",output," and type is ",type(output))
    