a = int(input("Enter first number: "))
b = int(input("Emter second number: "))

# FIND LCM
if a > b:
    smaller = b
else : 
    smaller = a 

for i in range(smaller,(a*b)+1):
    if((i%a) == 0 and (i%b) == 0):
        print(i)
        break



