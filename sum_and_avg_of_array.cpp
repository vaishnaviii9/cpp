#include<iostream>
using namespace std;
int main ()
{
int n,a[n],i,b[n],c[n],avg;
cout<<"\n Enter number of elements";
cin>>n;
cout<<"\n Enter elements for array A";
for(i=0;i<n;i++)
{
cin>>a[i];	
}
	
cout<<"\n Enter elements for array B";
for(i=0;i<n;i++)
{
cin>>b[i];	
}
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
}
cout<<"\n Sum is";
for(i=0;i<n;i++)
{
cout<<"\n"<<c[i];
}

for(i=0;i<n;i++)
{
	avg=c[i]/n;
cout<<"\n avg is"<<avg; 
}return 0;
}
