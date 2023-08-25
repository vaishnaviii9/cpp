#include<iostream>
using namespace std;
class Employee
{
public:
char fname[10], lname[10];
double msalary, msalary1,yearly,raise, total;
  void setfname()
  {
  	cout<<"\n Enter first name";
  	cin>>fname;
  	
  }
   
   void getfname()
   {
   	cout<<"\n NAME :"<<fname;
   }
   
   void setlname()
   {
   	cout<<"\n Enter last name";
   	cin>>lname;
   }
   
   void getlname()
   {
   	cout<<" "<<lname;
   }
   
   void setmsalary()
   {
   	cout<<"\n Enter monthly salary";
   	cin>>msalary1;
   }
   
   void getmsalary()
   {
   	if (msalary1>=0)
   	{
	   msalary=msalary1;
   	cout<<"\n SALARY :"<<msalary;
	   }
   	else
   	cout<<"\n Salary cannot be negative";
   }
inline void yearlysalary();
void setRaisesalary();
void totsalary();
} ;
inline void Employee:: yearlysalary()
{
	yearly= msalary*12;
	cout<<"\n Yearly salary is"<<yearly;
}
void Employee :: setRaisesalary()
{

	raise = msalary+(10 * msalary/100);
	cout<<"\n Raise is"<<raise;
}
void Employee :: totsalary()
{
	total=(raise *12)+ yearly;
	cout<<"\n Total salary of the employee is"<<total;

}
int main()
{
	Employee E1, E2;
	E1.setfname();
	E1.setlname();
	E1.getfname();
	E1.getlname();
	E1.setmsalary();
	E1.getmsalary();
	E2.setfname();
	E2.setlname();
	E2.getfname();
	E2.getlname();
	E2.setmsalary();
	E2.getmsalary();
	E1.yearlysalary();
	E2.yearlysalary();
	E1.setRaisesalary();
	E2.setRaisesalary();
	E1.totsalary();
	E2.totsalary();
	
	return 0;
}
