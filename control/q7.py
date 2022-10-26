# n = int(input("Enter n :"))
# x = int(input("Enter x in radians : "))
# i = 2;
# term = 2;
# sum = 1;

# while(i <= n):
#     term = -1 * ((x*x) / i*(i-1)) * term
#     i = i + 2
#     sum = sum + term 
# print(sum)

import math

x = int(input("Enter x : "))
sum = 1
term = 1
fact = 1

while(term > math.pow(10,-6)):
    term = term * x * (1/fact)
    sum += term
    fact += 1

print(sum)