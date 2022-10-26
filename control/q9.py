#sum of digits
def sumOfDigits(x):
    sum = 0 
    while(x>0):
        sum += x%10
        x = x//10
    
    return sum 

n = int(input("Enter a number"))
print(sumOfDigits(n))