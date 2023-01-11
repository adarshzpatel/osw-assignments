
lst = [1,2,3,4,5,6]

n = int(input("Enter number of items :"))
lst = []
lst.append(int(input()))
for i in range(1,n):
    lst.append(lst[i-1] + int(input()))
    
print("Cumulative List ",lst)
