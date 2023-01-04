def anagrams(str1,str2):
    if(sorted(str1)==sorted(str2)):
        return True
    else:  
        return False
    
def anagrams2(str1,str2):
    j=0
    if(len(str1)==len(str2)):
        for i in str1:
            for k in str2:
                if str1.count(i)==str2.count(k) and i==k :
                    j+=1
    n=str1[0]
    for i in str1:
        if str1.count(n)>1:
            j-=str1.count(i)
        
                        
    if(j==len(str1)):
        return True
    return False                
                
                
def main():
    s1='dddooooogg'
    s2='ggoooooddd'
    
    print("anagrams = ",anagrams2(s1,s2))
main()