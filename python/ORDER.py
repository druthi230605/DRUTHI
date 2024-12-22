class Order:
    def __init__(self,item,price):
        self.item=item
        self.price=price
    def __gt__(self,other):
        return self.price>other.price
O1=Order("toy",2000)
O2=Order("cup",500)
print(O2>O1)

