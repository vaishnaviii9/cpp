#include<iostream>
using namespace std;
int main()
{
	char c;
	int count=0;
	cout<<"\n Input text \n";
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
cout<<"\n Number of characters ="<<count<<"\n";
return 0;
}
