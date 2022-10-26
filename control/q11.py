import math

def areCoprimes(x,y):
    return math.gcd(x,y) == 1

x = int(input("Enter first number "))
y = int(input("Enter first number "))

print(areCoprimes(x,y))