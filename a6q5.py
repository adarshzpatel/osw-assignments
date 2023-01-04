# write a function taht takes a string as an input and determines the count of the number of words using regex
import re

def countWords(sen):
    return len(re.findall('[a-z]+',sen))

sen = input("Enter sentence ")
print("Enter number of words : ",countWords(sen))

