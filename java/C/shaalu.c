#include<stdio.h>
int *array()
{
    int B[]={1,2,3,4,5};
    return B;


}
void main()
{
    int *A,i;
    A=array();
    for( i=0;i<4;i++)
    {
        printf("%d\t",A[i]);
    }

}