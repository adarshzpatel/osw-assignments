def geoSum(n,r):
    if n == 1: 
        return n   
    return r**(n-1) + geoSum(n-1,r)

print(geoSum(4,1/2))