#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;

int item;
int isempty()
{
    return top==-1;
}
int isfull()
{
    return top==MAX_SIZE-1;
}
void push(int item)
{
    if(isfull())
    {
        printf("stack is full cannot insert an element!");

    }
    else{
        top++;
        stack[top]=item;
        printf("element is inserted");
    }
}

int pop()
{
    if (isempty())
    {
        printf("stack is empty cannot pop an element!");
        return -1;
    }
    else{
        int item=stack[top];
        top--;
        return item;

    }
}

int display()
{
    int i;
    if(isempty())
    {
        printf("cannot display.... stack is empty....");
    }
    else{
        for(i=0;i<=top;i++)
        {
            printf("%d",stack[i]);
        }
    }
    return 0;
}
int main()
{
    int op;
   
    while(1)
    {
         printf("enter th operation to be executed");
    scanf("%d",&op);
    int value;
        switch(op)
        {
            case 1:printf("enter the value to be inserted");
                   scanf("%d",&value);
                   push(value);
                   break;
            case 2: pop();
                    int poppedvalue=pop();
                    printf("value popped out!");
                    break;
            case 3: 
                   display();
                   break;
            case 4: exit(0);
            default: printf("INVALID");
        }
    }
    return 0;
}