#include<stdio.h>

int *createarray(int n)
{
    int i;
int *p=(int*)malloc(n*sizeof(int));
for( i=0;i<n;i++)
{
    scanf("%d",&p[i]);

}
return(p);

}


void main()
{
    int *A,n,i;
    printf("enter the values of n");
    scanf("%d",&n);
    A=createarray(n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    

}
