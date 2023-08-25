#include<stdio.h>
#define size 5
int main()
{ 
	int stack[size];
	int top=-1,item,i,choice;
while(1)
{
	printf("\n Menu");
	printf("\n 1.Push 2.Pop 3.Display");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //push
		if(top==size-1)
		printf("\n Stack is full.");
		else
		{
			printf("\n Enter elements");
			scanf("%d",&item);
			top++;
			stack[top]=item;
			printf("\n Elements inserted: %d",item);
		}
		break;
		
		case 2: //pop
		if(top==-1)
		printf("\n Stack is empty");
		else
		{
		printf("\n Deleted elements are: %d",stack[top]);
		top--;
	    }
	    break;
	     
	     case 3: // display
	     if(top==-1)
	     printf("\n Stack is empty");
	     else
	     {
	     	for(i=top;i>=0;i--)
	     	{
	     		printf("\n %d",stack[i]);
			 }
		 }
		 break;
		 
		 default : //exit
		 printf("\n Exit.");
		 
	}
}	
	return 0;
}
