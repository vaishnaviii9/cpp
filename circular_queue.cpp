
#include<stdio.h>
#define size 5
int main()
{
	int queue[size];
	int front=-1,rear=-1,item,choice,i;
	while(1)
{
	printf("\n Menu");
	printf("\n 1.Enqueue 2.Dequeue");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //enqueue
		
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			printf("\n Enter elements");
		scanf("%d",&item);
			queue[rear]=item;
			
	    }
		else if((rear+1)%size==front)
		{
		printf("\n Queue is full");
	    }
		else
		{
			rear=(rear+1)%size;
			queue[rear]=item;
			rear++;
		}
		break;
		
		case 2: //dequeue
		if(front==-1 && rear==-1)
		printf("\n Queue is empty");
		else if(front==rear)
		{
			printf("\n %d",queue[front]);
			front=rear=-1;
		}
		else
		{
			printf("%d",queue[front]);
			front=(front+1)%size;
		}
		break;
		
		default : //exit
		 printf("\n Exit.");
	}
}
	return 0;
}
