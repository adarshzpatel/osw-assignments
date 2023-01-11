# take coodinates of three points then print true if collinear
def is_collinear(x1,x2,x3,y1,y2,y3):
    slope1 = (x2 - x1) / (y2 - y1)
    slope2 = (x3 - x2) / (y3 - y2)
    print("slope1 ", slope1, " slope2 ",slope2)
    if(slope1 == slope2): 
        return True
    else:
        return False

x1 = int(input("Enter x1 : "))
y1 = int(input("Enter y1 : "))

x2 = int(input("Enter x2 : "))
y2 = int(input("Enter y2 : "))

x3 = int(input("Enter x3 : "))
y3 = int(input("Enter y3 : "))

print(is_collinear(x1,x2,x3,y1,y2,y3))