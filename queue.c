
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue[MAX];
int front=-1,rear=-1;
void insert(int);
void delete();
void display();
int main()
{

        int choice,item;
        while(1){
        
		printf("\n menu\n");
		printf("insert element\n");
		printf("delete element\n");
		printf("display element\n");
		printf("exit\n");
		printf("enter the element:");
		scanf("%d",&item);
		switch(choice)
		{
		        case 1: printf("enter the element:\n");
		                scanf("%d",&item);
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
                printf("queue is empty:\n");
        else
        {
                printf("delete element:%d\n",queue[front]);
                if(front==rear)
                        front=rear=-1;
                else
         		 front++;
         }
}
void dispay()
{
	int i;
	if(front==-1)
		printf("queue is empty\n");
	else
	{
		printf("queue content\n");
		for(i=front;i<=rear;i++)
			printf("%4d",queue[i]);
	}
}
