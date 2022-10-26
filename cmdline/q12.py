import sys 

x= sys.argv[1]
y= sys.argv[2]
z= sys.argv[3]

if(x < y < z) :
    print("Strictly ascending")
elif x > y > z : 
    print("Strictly descending")
else: 
    print("False")