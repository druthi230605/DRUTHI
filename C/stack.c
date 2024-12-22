#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;  // Initialize top to -1
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
    if (isfull())
    {
        printf("STACK IS FULL!");
    }

    else
    {
top++;
stack[top]=item;
printf("%d is inserted to stack!\n",item);
    }
}

int pop()
{
    if(isempty())
    {
printf("STACK IS EMPTY!");
return -1;
    }

    else
    {
item=stack[top];
top--;
return item;
    }
}

int display()
{
    if (isempty())
    {
        printf("stack is empty");
        return -1;
    }

    else{
    int i;
    for (i=0;i<=top;i++)
    {
printf("%d\t",stack[i]);

    }
    }
}


int main()
{
push(10);
push(20);
push(30);
push(40);

//display();
//printf("\n");
display();
printf("%d is the poped  elemnt\n",pop());
printf("%d is the popped element\n",pop());
display();

}