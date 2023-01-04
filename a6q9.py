# write a python progream to :

def a(str):
    # a . reverse a string 
    return str[::-1]

def b(str):
    # b. revrse string without reversing the words 
    result = ''
    words = str.split(' ')
    for i in range(len(words)-1,-1,-1):
        result += words[i] + " "
    return result
    
def c(str):
    #check if string is symmetric or assymmetric 
    length = len(str)

    # if odd length return asymmetric)
    if(length % 2 == 1 or str[:length//2] != str[length//2:length] ):
        return "Asymmetric"
    else : 
        return "Symmetric"

def d(str):
    # palindrome
    
    if(str[::-1] == str):
        return True
    else : 
        return False 

def e(str,index):
    # remove ith element 
    result = ''
    for i in range(0,len(str)):
        if(i!=index):
            result += str[i]
    return result 


def f(str):
    # count number of vowels and consonants 
    str = str.lower()
    vowels = 0
    consonants = 0
    for ch in str:
        if(ch.isalpha()):
            if(ch ==  'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch =='u'):
                vowels += 1
            else : 
                consonants += 1
    print("Number of vowels = ", vowels)
    print("Number of consonants = ",consonants)

def g(str):
    count = 0
    for i in str:
        count+=1
    return count

def h(str):
    # check if a string contains at least one digit or one alphabets
    digit = 0
    alpha = 0
    for ch in str:
        if(ch.isdigit()):
            digit+=1
        if(ch.isalpha()):
            alpha+=1
    return digit > 0 and alpha > 0

def i(str):
    result = str[0]
    for ch in str: 
        # if the charcter does not exits tin thresut then add it to the result
        if result.find(ch) == -1 :
            result += ch
    return result

def j(str):

    unique = str[0] # unique characters
    for ch in str: 
        # if the charcter does not exits tin thresut then add it to the result
        if unique.find(ch) == -1 :
            unique += ch
    

    for i in unique: 
        count = 0
        for j in str:
            if i == j:
                count+= 1
        print(i, " occurs ",count,"times")

 
def k(str):
    unique = str[0] # unique characters
    for ch in str: 
        # if the charcter does not exits tin thresut then add it to the result
        if unique.find(ch) == -1 :
            unique += ch
    
        
    for i in unique: 
        count = 0
        maxVal = 0
        mostFreq = ''
        for j in str:
            if i == j:
                count+= 1
        if(count >= maxVal):
            mostFreq += i
        print("Most frequently occuring character is ",mostFreq)


print("a ) Reverse sentence (hellow world ): ",a("Hello world"))
print("----------------------------------------")
print("b ) Reverse sentence without reversing words (Hello world): ",b("Hello world"))
print("----------------------------------------")
print("c ) Check whether a string is symmetric or not (MAMA) : ",c("MAMA"))
print("----------------------------------------")
print("d ) Palindrome or not (MADAM): ", d("MADAM"))
print("----------------------------------------")
print("e ) Remove 3rd index (MADAM)" , e("MADAM",3))
print("----------------------------------------")
print("f ) Count number of vowels and consonants (Hello world) ")
f("Hello world")
print("----------------------------------------")
k("Helloooo")
print("g ) Length of string (Hello) ",g("Hello"))
print("----------------------------------------")
print("h ) Check if a string contains at least one digit and alphabet (adafsh23) :",h("adafsh23"))
print("----------------------------------------")
print("i )Remove duplicates (MADAM) ", i("MADAM"))
print("----------------------------------------")
print("j ) Calculate frequency of characters : ")
j("Helloooo")
print("----------------------------------------")
print("k ) Most frequent of characters (Helloooo): ")
k("Hellllllloooo")