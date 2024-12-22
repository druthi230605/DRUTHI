class Student():
    def __init__(self,name,marks):
        self.name=name
        
        self.marks=marks
    def average(self):
         sum=0
         for i in self.marks:
             sum+=i
         
         average=sum/len(self.marks)
         
         return average
s1=Student("DRUTHI",[99,75,85])
print("your name is ",s1.name)
print("YOUR SCORE:",s1.average())
