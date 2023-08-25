#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,j,r;
	r=0;
	char p[4];
	printf("\n Enter Number");
	scanf("%s",p);
	len = strlen(p);
	j=len-1;
	for (i=0;i<len;i++)
	{
		
		if(p[i]!=p[j])
	
		{ r=1;break;
		
		}
		j--;
	}
	if(r==0)
	{
		printf("Palindrome");
		
	}
	else
	{
		printf("Not palindrome");
	}
return 0;
}
