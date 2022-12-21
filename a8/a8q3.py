def power(a,b):
    
    if b == 0:
        return 1

    elif b > 0: 
        return a * power(a,b-1);

    elif b < 0: 
        return 1/(a*power(a,-b))

print(power(2,-3))