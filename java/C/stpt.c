#include<stdio.h>
#include<string.h>
struct Student{
char name[10];
int age;
};
int main()

{
    struct Student s;
    strcpy(s.name,"vyshu");
    s.age=18;
printf("name:%s\n age:%d",s.name,s.age);
struct Student *p=&s;
strcpy((*p).name,"shalini");
p->age=19;
printf("name:%p\n,age:%p\n",p->name,p->age);
printf("name:%p\n,age:%p\n",s.name,s.age);
return 0;

}