def binary(n,out=''):
    if(len(out) == n):
        print(out)
        return
    
    binary(n,out+"0")
    binary(n,out+"1")


binary(10)