#include<stdio.h>
struct student{
    char name[50];
    int age;
};
struct student createstructure()
{
    struct student temp={"lihas",19};
    return temp;
}
int main()
{
struct student s;
s=createstructure();
printf("name %d,age %d",s.name,s.age);
return 0;

}