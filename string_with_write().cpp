#include<iostream>
using namespace std;
int main()
{
	char *string1="C++";
	char *string2="Programming";
	for(int i=1;i<11;i++)
{
	cout.write(string2,i);
	cout<<"\n";
}
for(int i=11;i>0;i--)
{
	cout.write(string2,i);
	cout<<'\n';
}
cout.write(string1,5).write(string2,11);
cout<<"\n";
cout.write(string1,7);
	return 0;
}
