#include<iostream>
using namespace std;
class Box
{
public:
double length,width,height;
 
 void setlength()
 {
 	cout<<"Enter length"<<endl;
 	cin>>length;
 }
 void setheight()
 {
 	cout<<"Enter height"<<endl;
 	cin>>height;
 }
 void setwidth()
 {
 	cout<<"Enter width"<<endl;
 	cin>>width;
 }
 double getlength()
 {
 	return length;
 }
 double getheight()
 {
 	return height;
 }	
 double getwidth()
 {
 	return width;
 }
 
 Box()   //constructor
 {
 
 length =10;
 height =20.5;
 width =30;	
 }
 Box(double x,double y,double z)
 {
 	length=x;
    height=y;
    width=z;
 }
 Box(Box &B2)
 {
 	length=B2.length;
 	height=B2.height;
 	width=B2.width;
 }
 void area()
 {
 	double area;
 	area = (2*height*width)+(2*height*length)+(2*width*length);
 	cout<<"Area is"<<area<<endl;
 }
 void volume()
 {
 	double volume;
 	volume = length*height*width;
 	cout<<"Volume is"<<volume<<endl;
 }
};
int main()
{
	Box B1;
	Box B2(1,2.0,3);
	Box B3(B2);
B1.area();
B2.area();
B3.area();
B1.volume();
B2.volume();
B3.volume();
	return 0;
}
