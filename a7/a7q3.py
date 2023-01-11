sentence = input("Enter a sentence : ")

freq = {}

for i in sentence:
    if i not in freq.keys():
        freq[i] = 1
    else: 
        freq[i] = freq.get(i) + 1
        
print(freq)