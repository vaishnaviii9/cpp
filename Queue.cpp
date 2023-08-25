#include<stdio.h>
#define size 5
int main()
{
	int queue[size];
	int front=-1,rear=-1,item,choice,i;

while(1)
{
	printf("\n Menu");
	printf("\n 1.Insert 2.Delete 3.Display");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //insert
		if(rear==size-1)
		printf("\n Queue is full");
		else
		{
			if(front==-1)
			{
				front=0;
			}
				printf("\n Enter elements");
				scanf("%d",&item);
				rear++;
				queue[rear]=item;
			
		}
		break;
		case 2: //delete
		if(front==-1 || front>rear)
		printf("\n Queue is empty");
		else
		{
		printf("\n Deleted element:%d",queue[front]);
		front++;
	    }
	    break;
	    case 3: //display
	    if(front==-1 || front>rear)
		printf("\n Queue is empty");
		else
		{
			for(i=front;i<=rear;i++)
			{
			printf("\n %d",queue[i]);
			}
		}
		break;
		
		default : //exit
		 printf("\n Exit.");
	}
}
	return 0;
}
