#include<iostream>
#include<cmath>
using namespace std;
int main()
{
/*	cout.setf(ios::showpos);
	cout<<123<<endl;
	cout.width(5);
	cout<<"ITEMS";
	cout.width(8);
	cout<<"COST";
	cout<<"\n";
	cout.unsetf(ios::showpos);
	cout.precision(3);
	cout.width(8);
	cout<<sqrt(2); */
	
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout.width(16);
	cout<<"Table 1 "<<"\n";
//	cout.fill('*');
//	cout.precision(3);
//	cout.setf(ios::internal, ios::adjustfield);
	cout.setf(ios::oct,ios::basefield);
//	cout.width(16);
	cout<<3<<"\n";
	return 0;
}
