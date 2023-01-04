# mimic .title() function without using builtin function 
def makeTitle(sen):
    result = ''
    # for first word 
    for i in range(0,len(sen)):
        if sen[i-1] == ' ' and sen[i].isalpha() :
            result += sen[i].upper()
        else :  
            result += sen[i].lower()

    return result

sen = input("Enter sentence : ")
print(makeTitle(sen))
