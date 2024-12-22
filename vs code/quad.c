#include<stdio.h>
int main()
{
    int a,b,c,real,imag;
    int root1,root2,d;
    printf("enter the value of a,b,c:");
    scanf ("%d%d%d",&a&b&c);
    d=((b*b)-4*a*c);

    if(d=0)
    {
        printf("the roots are real and equal");
        root1=root2=((-b)/2*a);
        printf("root1=root2 is %.3f\n",root1);
    }

    else if (d>0)
    {
        printf("the roots are real and distinct");
        root1=(((-b)+sqrt(d))/(2*a));
        root2=(((-b)-sqrt(d))/(2*a));
        printf("root1 is %.3f\n root2 is %.3f\n",root1,root2);
    }


    else
    {

    printf("the roots are imaginary");
    real=(-b)/2*a;
    imag=(sqrt(-d))/2*a;
    printf("root1 is %.3f+i %.3f\n",root1);
    printf("root2 is %.3f-i%.3f\n",root2);
}
return 0;

}