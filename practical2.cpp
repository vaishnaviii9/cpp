//program to overload Unary operator
#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
		
		public:
			Distance()                   // default Constructor
			{
				feet=0;
				inches=0;
				
			}
			Distance(int f, int i)                    //parameterized constructor
			{
				feet=f;
				inches=i;
			}
			void display()
			{
				cout<<"f:"<<feet<<"i:"<<""<<inches<<"\n";
			}
			void operator-()             //operator overloading
			{
				feet=-feet;
				inches=-inches;
			}

};
int main()
{
	Distance D1(8,9);// D2;
D1.display();
-D1;
D1.display();
/*-D2;
D2.display();*/
return 0;

}
