#Armstrong Number 

def isArmstrong(x):
    sum = 0 
    copy = x
    while(x>0):
        sum += (x%10)**3
        x = x//10
    return sum == copy 


for i in range(1,1001):
    if(isArmstrong(i)):
        print(i, "is armstrong number ")
    