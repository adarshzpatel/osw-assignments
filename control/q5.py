a = int(input("Enter first number: "))
b = int(input("Emter second number: "))

# FIND GCD 
if a > b:
    smaller = b
else : 
    smaller = a 

gcd = 1

for i in range(1,smaller+1):   
    if((a%i) == 0 and (b%i) == 0):
        gcd = i

print("GCD is ",gcd)


