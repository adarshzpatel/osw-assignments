# find sum of even digits of a four digit number 
# without using control structures
def even_sum(n):
    n1 = int(n) % 10
    print("n1 ",n1, "n ",n)
    n = n/10
    n2 = int(n) % 10
    print("n2 ",n2, "n ",n)
    n = n/10
    n3 = int(n) % 10
    print("n3 ",n3, "n ",n)
    n = n/10
    n4 = int(n)%10
    print("n4 ",n4, "n ",n)
    sum = n1*(1-n1%2) + n2*(1-n2%2) + n3*(1-n3%2) + n4*(1-n4%2) 
    return sum

print(even_sum(5562));