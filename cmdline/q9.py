# wap that take stwo positive integers as command line arguments and prints true if either evenly divides the other 
import sys

def check_div(a,b):
    if (a % b) == 0 or (b % a) == 0:
        return True
    else: 
        return False

a = int(sys.argv[1])
b = int(sys.argv[2])
print("a ", a , "b ", b);

print(check_div(a,b));


