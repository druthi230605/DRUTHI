#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int age;
    float percentage;
};
int main()
{
struct student s1[20];
strcpy(s1[0].name,"mithil");
s1[0].age=12;
s1[0].percentage=98;
strcpy(s1[1].name,"abhishek");
s1[1].age=19;
s1[1].percentage=95;
printf("name of 1st student is %s   age: %d  percentage:%f",s1[0].name,s1[0].age,s1[0].percentage);
printf("name of 1st student is %s   age: %d  percentage:%f",s1[1].name,s1[1].age,s1[1].percentage);
return 0;
}