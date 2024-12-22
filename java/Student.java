class Student{
    String name;
 
    int age;

    public Student(String name,int age)
    {
        this.name=name;
        this.age=age;

    }

    public Student(Student student)
    {
        this.name=student.name;
        this.age=student.age;
System.out.println("copy conjstructor called.student created as copy of an existing student");

    }
public void displayInfo()
{
    System.out.println("student name"+name);
    System.out.println("student age"+age);

}
}

public class {
public static void main(String[] args) {
    Student student1=new Student("druthi",19);
    
    Student student2=new Student(student1);
    student2.displayInfo();


}
}