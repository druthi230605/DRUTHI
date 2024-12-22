class Account:
    def __init__(self,balance,account_no):
        self.balance=balance
        self.account_no=account_no
        print("CREATING ACCOUNT....")
    
    def debit(self):
        amount_debited=int(input("enter the amount to be debited"))
        self.balance-=amount_debited
        print("your amount successfully debited.....","your balance :",self.balance)
    def credit(self):
        amount_credited=int(input("enter the amount to be credited...."))
        self.balance+=amount_credited
        print("your amount successfully credited....","your balance",self.balance)
p1=Account(20000,"ADFG569770")
print( "balance=",p1.balance)
print("account_no=",p1.account_no)
p1.debit()
p1.credit()
print("THANK YOU ..... VISIT AGAIN.....,HAVE A NICE DAY")