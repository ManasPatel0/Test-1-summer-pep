def frequent_words(text,k):
    words=text.split()
    freq={}
    result=[]

    for w in words:
        if w in freq:
            freq[w]+=1
        else:
            freq[w]=1

    for w in words:
        if freq[w]>=k and w not in result:
            result.append(w)
    return result

text = "a mouse is smaller than a dog but a dog is stronger"
print(frequent_words(text, 2))
