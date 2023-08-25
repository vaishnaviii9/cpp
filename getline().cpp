#include<iostream>
using namespace std;
int main()
{
	char name[20];
	cout<<"Hello! Enter city name"<<endl;
	cin.getline(name,20);
	cout<<"You Entered \n";
	cout<<name;
	return 0;
}
