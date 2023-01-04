def removeDup(str1):
    str=str1[0]
    j=0
    for i in range(1,len(str1)):
        if str1[i]!=str[j]:
            str+=str1[i]
            j+=1
        else:
            str+='*'
            j+=1
    return str
    
def main():
    str=input("Enter string : ")
    print(removeDup(str))
main()