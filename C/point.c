#include<stdio.h>
int main()
{
int age=19;
int *ptr=&age;
int _age=*ptr;
//printf("%d\n%d\n%d\n%d\n",age,*ptr,_age,ptr);
//printf("%u\n",&age);
//printf("%u\n",ptr);
//printf("%u\n",&ptr);

printf("%d",*(&age));
return 0;





}