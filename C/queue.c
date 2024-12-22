#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int queue[MAX_SIZE];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==MAX_SIZE-1)
    {
        printf("queue is full");
    }

    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("elememt inserted into queue!");

    }
}
int dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("queue is emoty");
        return -1;
    }
    else if(front==rear)
    {
        int item=queue[front];
        rear=front=-1;
        printf("dequeued elements");
        return item;
        
    }
}
