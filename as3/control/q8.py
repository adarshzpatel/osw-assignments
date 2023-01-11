def checkPalindome(x):
    return x == x[::-1]

n = input("Enter a number ")
print(checkPalindome(n));