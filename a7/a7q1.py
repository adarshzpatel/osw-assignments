def black_box(x):
    return list(set(x))

def remove_duplicates(x):
    without_duplicates = []
    for i in x:
        if(i not in without_duplicates):
            without_duplicates.append(i)
    return without_duplicates

print("Set Method " ,black_box([2,4,2,3,4,3,3,1]))
      
print("Trivial Method " ,remove_duplicates([2,4,2,3,4,3,3,1]))
