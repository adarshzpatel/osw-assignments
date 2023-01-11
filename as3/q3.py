def pound_to_kg(n):
    # convert pound to kgs
    return float(n)*0.45359237 

def inch_to_meters(n):
    return float(n)*0.0254

def bmi(w,h):
    return float(w/(h*h))

wt = pound_to_kg(input("Enter weight in pounds : "))
h = inch_to_meters(input("Enter height in inches : "))

print("Your BMI is : ",  bmi(wt,h))
