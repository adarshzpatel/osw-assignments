# print sum of all subset 

def sumSubset(lst,sum=0,i=0,result=set()):
    if(i == len(lst)):
        result.add(sum)
        return     

    result.add(sum);

    sumSubset(lst,sum+lst[i],i+1) # take 
    sumSubset(lst,sum,i+1) # not take
    
    return result

print(sumSubset([2,4,5]))