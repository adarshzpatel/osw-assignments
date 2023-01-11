def UpperCase(s):
    return chr((ord(s)-32))
s = input("Enter lower case character : ")
assert(ord(s) >= 97 and ord(s) <= 97+26) # will throw assertion error 

print("Uppercase is ", UpperCase(s))
    