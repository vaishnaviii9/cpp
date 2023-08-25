/*
#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void setdata(int v1, int v2)
		{
			a=v1;
			b=v2;
		}
		void setdatabysum(complex o1,complex o2){
			a=o1.a + o2.a;
			b=o1.b + o2.b;
		}
		void printnumber(){
			cout<<"complex no. :"<<a<<" + "<<b<<"i"<<endl;
		}
};
int main(){
	complex c1,c2,c3;
	c1.setdata(1,2);
	c1.printnumber();
	
	c2.setdata(3,4);
	c2.printnumber();
	
	c3.setdatabysum(c1,c2);
	c3.printnumber();
	return 0;
}
*/

/*#include<iostream>
using namespace std;
class example{
	public:
		int a;
		void add(example E)
		{
			a=a+E.a;
		}
};
int main()
{
	example E1,E2;
	E1.a=50;
	E2.a=100;
	cout<<"initial values :"<<E1.a<<"\n"<<E2.a;
	
	E2.add(E1);
		cout<<"new values"<<E1.a<<"\n"<<E2.a;
	
return 0;
}
*/
/*
#include<iostream>
using namespace std;
class base{
	public:
		void show();
};
void base :: show()
{
	cout<<"base";
}
class derived : public base 
{
	public:
		void display(){
			cout<<"derived";
		}
};
int main()
{
	derived d;
	d.display();
	d.show();
}

*/
/*
#include<iostream>
using namespace std;
class base{
	private : int pri=5;
	protected :int x=10;
	public : int pub =15;
	void getpri()
	{
		cout<<"priv"<<pri<<endl;
	}
};
class derived :public base
{
	public:
		derived(){
			getpri();
			cout<<x<<"\n";
		}
};
int main(){
	derived d;
}
*/
/*
#include<iostream>
using namespace std;
class base{
	
	int i,j;
	public:
		void set(int a,int b)
		{
			i=a;
			j=b;
		}
		void show(){
			cout<<i<<" "<<j<<endl;
		}
};
class derived : protected base
{
	int k;
	public:
		derived(int x)
		{ 
		set(5,10);
		show();
			k=x;
		}
		void showk(){
			cout<<k<<endl;
		}
};
int main()
{
	derived ob(3);
	//ob.set(1,2);
	ob.showk();
}
*/
/*
#include<iostream>
using namespace std;
class base{
public:
	base()
	{cout<<"base";
	}
void display(){
	cout<<"display";
}
};
class derived :public base
{
	public:
	derived()
	{cout<<"derived";
	}
};
int main()
{
	derived d;
}
*/



























