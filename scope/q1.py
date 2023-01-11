# i )
# globalVar = 10
# def test():
    # localVar = 20
    # print("Inside function test : globalVar = ", globalVar);
    # print("Inside function test : localVar = ", localVar);
# test()
# print("Outside function test : globalVar = ", globalVar);
# print("Outside function test : localVar = ", localVar);

# i ) OUTPUT                                              
# Inside function test : globalVar = 10
# Inside function test : localVar = 20

# Outside function test : globalVar = 10
# 'localVar' is not defined


# ii ) 
# globalVar = 10 
# def test():
#     localVar = 20
#     globalVar = 30
#     print("Inside function test : globalVar =",globalVar);
#     print("Inside function test : localVar =",localVar);
# test()
# print("Outside function test : globalVar = ",globalVar);

# ii ) OUTPUT
# Inside function test : globalVar = 30
# Inside function test : localVar = 20
# Outside function test : globalVar = 10

# iii ) 

#globalVar = 10 
#def test():
#    global globalVar
#    localVar = 20
#    globalVar = 30

#print("Outside function test : globalVar = ",globalVar);
# ii ) OUTPUT
# Inside function test : globalVar = 30
# Inside function test : localVar = 20
# Outside function test : globalVar = 30



# iv ) 

# def test1():
#     test1.a = 10
#     def test2():
#         test1.a = 8
#         print("Inside function test 2 ", test1.a)
#     test2()
#     print("Outside function test 2",test1.a)
# test1()

# ii ) OUTPUT
# Inside function test 2:  8
# Inside function test 2 : 8

# v ) 

# a =4 
# def f():
#     a = 5
#     def g():
#         nonlocal a 
#         a = 10 
#         print("Inside function g, a = ",a)
#         def h():
#             nonlocal a 
#             a = 20 
#             print("Inside function h , a = ",a)
#         h()
#     g()
#     print("Inside function f, a = ",a)
# f()
#print("Outside function test : globalVar = ",globalVar);
# ii ) OUTPUT
# Inside function g, a = 10
# Inside function h , a = 20
# Inside function f , a = 20

# vi ) 

x = 2 
def test(): 
    x = x + 1 
    print(x)
test()
print(x)

# ii ) OUTPUT
# local variable 'x cannot be referemce before assignment




# vii ) 

# x = 2 
# def test():
#     global x
#     x = x + 1 
#     print(x)
# test()
# print(x)


# outout 
#3
#3 