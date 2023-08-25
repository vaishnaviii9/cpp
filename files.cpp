#include<iostream>

using namespace std;
int main()
{
	char c;
	int count =0;
	cout<<"input text \n";
	cin.get(c);
	while(c!= '\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<count;
	return 0;
}
