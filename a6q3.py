
def calcWords(sen):
    return len(sen.split(" "))

def manualCalcWords(sen):
    pass

sen = input("Enter sentence : ")
print("Number of words : " , calcWords(sen))


