def  increment(y):
    return(lambda x:x+1)(y)
a=100
print("a before incrementing",a)
b=increment(a)
print("after incrementing",b)