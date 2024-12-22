
#include<stdio.h>
void delete(int *a,int n,int k)
{
    int j;
    j=n;
    while(k<=j)
    {
        a[j-1]=a[j];
        j=j-1;
    }
}
    void value(int *a,int n)
    {
        int i;
        printf("elements of array");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    int main()
    {
        int X[10]={2,4,6,8,10};
        int n=5;
        int k;
        printf("\n enter index to be deleted");
        scanf("%d",&k);
        delete(X,n,k);
        n=n-1;
        value(X,n);
        return 0;
    }

    

    










 




