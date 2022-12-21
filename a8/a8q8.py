def isPrime(n, i = 2):
    if(n<=2):
        return n == 2
    if(n%i == 0):
        return False
    
    #Check if i is <= root(n)
    if(i * i > n):
        return True
    
    return isPrime(n,i+2);

print("2 ->",isPrime(2))
print("5 ->",isPrime(5))
print("10 ->",isPrime(10))
print("7 ->",isPrime(7))

