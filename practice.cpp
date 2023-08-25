/*#include<iostream>
using namespace std;
class Person{
	public:
		char name[20];
		int age;
	public:
		void getdata()
		{
			cout<<"Enter name"<<endl;
	cin.getline(name,20);
			cout<<"Enter age"<<endl;
			cin>>age;
		}
		void display();
	//	{
	//		cout<<"Name:"<<name<<endl;
	//		cout<<"Age:"<<age<<endl;
	//	} 
}P1,P2;
void Person :: display()
{
	cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
}
int main()
{
	P1.getdata();
	P1.display();
	P2.getdata();
	P2.display();
	return 0;
} 
*/

/*#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cout<<"enter op : +,-,*,/"<<endl;
	cin>>op;
	cout<<"enter 2 num:"<<endl;
	cin>>num1>>num2;
	
	switch(op)
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
			break;
		default:
			cout<<"ERROR"<<endl;
			break;
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year"<<endl;
	cin>>year;
	if(year %4==0)
	{
		cout<<"LEAP YEAR"<<endl;
	}
	else if(year %400== 0)
	{
		cout<<"LEAP YEAR"<<endl;
	}
	else if(year %100==0)
	{
		cout<<"NOT A LEAP YEAR"<<endl;
	}
	else
	{
	cout<<"NOT A LEAP YEAR"<<endl;	
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum=0;
	cout<<"Enter number"<<endl;
	cin>>num;
	while(num>=0){
	sum=+num;
	cout<<"enter num"<<endl;
	cin>>num;
    }
    cout<<"Sum:"<<sum<<endl;
	return 0;
}
*/

/*#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	string name;
	int roll_no;
};
int main(){
	Student S;
S.name="John";
S.roll_no=2;
cout<<S.name<<endl;
cout<<S.roll_no<<endl;
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Area{
	public:
		int ln,br;
		public:
		void setDim()
		{
		cout<<"Enter ln and br"<<endl;
		cin>>ln>>br;	
		}
		void getArea()
		{
			cout<<"Area :"<<ln*br<<endl;
		}
};
int main()
{
	Area R;
	R.setDim();
	R.getArea();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Rectangle{
	public:
		int ln,br;
		public:
		int Area(){
			cout<<ln*br; 
		}
};
int main(){
	Rectangle R1,R2;
	R1.ln=4;R1.br=5;
	R2.ln=5;R2.br=8;
	R1.Area();
	cout<<"\n";
	R2.Area();
	return 0;
} */

/*#include<iostream>
using namespace std;
class Cube{
	public:
	int side; 
	public:
		Cube(int x);
};
Cube :: Cube(int x)
{
	side=x;
}
int main()
{
	Cube c1(10);
	Cube c2(20);
	cout<<c1.side<<" "<<c2.side;
} */

#include<iostream>
using namespace std;
class Cube{
	public:
		int side;
		public:
			Cube(Cube &c);
};
Cube :: Cube(Cube &c)
{
	side=c.side;
}
int main()
{
	Cube c;
	Cube c1(c);
}
