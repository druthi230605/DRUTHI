file_name=input("enter the file name")
f=open("file_name","r")
word_count={}
for line in f:
    words=line.split()
    for word in words:
        if word in word_count:
            word_count[word]+=1
        else:
            word_count[word]=1
print(word_count)
f.close()