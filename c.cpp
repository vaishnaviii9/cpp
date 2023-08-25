#include<stdio.h>
union Data
{
	int i;
	float f;
	char str[20];
	
}data;

int main(){
	data.i=10;
	data.f=220.5;
	printf("data.i %d",data.i);
	printf("data.f %f",data.f);
	return 0;
}
