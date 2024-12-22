class Employee: 
    def __init__(self,role,department,salary):
        self.role=role
        self.department=department
        self.salary=salary
     
    def show(self):
        print("role",self.role)
        print("department",self.department)
        print("salary per anum",self.salary)


class Engineer(Employee):
    def __init__(self,name,age,role,department,salary):
        
        self.name=name
        self.age=age
        super().__init__(role,department,salary)
    def show(self):
        
        print("name",self.name)
        print("age",self.age)
        super().show()

E1=Employee("HR","STOCKS",10000000)
E1.show()
S1=Engineer("ABHISHEK BIRADAR C",19,"ENGINEER","IT",10000000)
S1.show()



