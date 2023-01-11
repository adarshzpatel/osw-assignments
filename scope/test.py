def f():
    nonlocal a = 5  
    print("loocal a: ",a)
f()
print("OUTSIDE A ", a )