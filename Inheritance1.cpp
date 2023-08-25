#include<iostream>
using namespace std;
class std_basicinfo
{
	public:
		char Name[30];
		int Roll_no;
		int Age;
		char Gender[7];
		void name();
		void roll_no();
		void age();
		void gender();
};
void std_basicinfo::name()
{
	cout<<"Enter name :"<<endl;
	cin>>Name;
}
void std_basicinfo::roll_no()
{
	cout<<"Enter roll no :"<<endl;
	cin>>Roll_no;
}
void std_basicinfo::age()
{
	cout<<"Enter age :"<<endl;
	cin>>Age;
}
void std_basicinfo::gender()
{
	cout<<"Enter gender :"<<endl;
	cin>>Gender;
}
class std_resultinfo : public std_basicinfo
{
public: 
	int s1,s2,s3,s4,s5;
  
	void getinfo()
	{
		cout<<"Enter marks out of 100:"<<endl;
		cin>>s1>>s2>>s3>>s4>>s5;
	}
	void calc()
	{
	 int total; float perc;
	total = s1+s2+s3+s4+s5;
     perc =((total*100)/500);
     cout<<"Total marks: "<<total<<endl;
		cout<<"Percentage: "<<perc<<"%"<<endl;
    }
	void display()
	{
		cout<<"Name: "<<Name<<endl;
		cout<<"Roll no: "<<Roll_no<<endl;
		cout<<"Age: "<<Age<<endl;
		cout<<"Gender: "<<Gender<<endl;
	
	}
};
int main()
{
	std_resultinfo S;
	S.name();
	S.roll_no();
	S.age();
	S.gender();
	S.getinfo();
	S.display();
	S.calc();
	return 0;
}
