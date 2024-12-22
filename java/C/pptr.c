#include<stdio.h>
int main()
{
     float price=100.00;
     float *ptr=&price;
     float **pptr=&ptr;
     printf("%f\n %f\n%p\n%p\n",*ptr,**pptr,ptr,pptr);
return 0;+
}