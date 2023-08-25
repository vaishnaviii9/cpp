#include<stdio.h>
#define size 5
int main()
{
	 int stack[size];
	 int i,choice,item,top=-1;
	 while(1)
	 {
	 	printf("menu");
	 	printf("push pop display");
	 	scanf("%d",&choice);
	 	switch(choice){
	 		
	 		case 1 : 
	 		//push
	 		if(top==size-1)
	 		{
	 			printf("full");
	 			
			 }
			 else
			 {
			 	
			 	printf("enter elements");
			 	scanf("%d",&item);
			 	top++;
			 	stack[top]=item;
			 	printf("elements entered",item);
			 }
			 break;
			 
			 case 2 :
			 	//pop
			 	if(top==-1)
			 	{
			 		printf("empty");
				 }
				 else
				 {
				 	printf("elements to be deleted ",stack[top]);
				 	top--;
				 }
			 	break;
			 	
			case 3 :
		        //display
		        if(top==-1)
		        {
		        	printf("empty");
				}
				else
				{
					for(i=top; i>0;i--){
					
					printf("%d",stack[i]);
					}
				}
				break;
				
	        default :
	        	printf("exit");
		 }
	 }
	 return 0;
}
