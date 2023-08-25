#include<iostream>
using namespace std;

int main()
{
	int age=25;
	
	try
	{
		if(age >= 24)
		{
			cout<<"ACCESSED";
		}
		else
		{
			throw(age);
		}
	}
	catch(int age)
	{
		cout<<"ACCESS DENIED";
		cout<<"\n age :"<<age;
	}
	return 0;
}
