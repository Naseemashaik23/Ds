\* c program to implement stacks using array*\
#include<stdio.h>
int main()
#define MAX 20
int queue[MAX]
int front=-1,rear=-1;
void insert();
void delete();
void display();
int main()
{

        int choice;
        printf("insert element
        printf("enter the element:");
        scanf("%d",&item);
        switch(choice)
        {
                case 1: printf("enter the element:\n");
                        scanf("%d",item);
                        insert(item);
                        break;
                case 2: delete();
                        break;
                case 3: display();
                        break;
                case 4: exit(0);
                default:("invalid choice:\n");
      }
                                              
}
void insert(int item)
{
        if(rear=MAX-1)
                printf("queue is full");
        else
        {
                queue[++rear]=item;
                if(front==-1)
                        front=0;
        }
}
void delete()
{
        if(front==-1)
                printf("queue is empty:\n);
        else
        {
                printf("delete element:\n");
                if(front==rear)
                        front=rear=-1;
                else
                {
                        printf
