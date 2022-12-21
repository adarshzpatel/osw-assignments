def sum(n,x=0):
    if (n-x) <= 0 : 
        return 0
    return n-x + sum(n,x+2)

print(sum(6))