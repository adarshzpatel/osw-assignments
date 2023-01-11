import math
n = int(input("Enter a number : "))

# Check if the number is a perfect number 

sum = 0 
for i in range(1,math.ceil(n/2)+1):
    if n % i == 0 : 
        sum += i;

if sum == n : 
    print("PERFECT NUMBER")
else : 
    print("NOT A PERFECT NUMBER")