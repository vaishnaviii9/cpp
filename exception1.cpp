#include<iostream>
using namespace std;
int main(){
	int num,denum,output;
	cout<<"enter num and denum"<<endl;
	cin>>num>>denum;
	
	try{
		if(denum==0){
			throw denum;
		}
		else{
			output=num/denum;
		}
		
	}
		
	catch(int d)
		{
			cout<<"you cannot enter 0 in denum while doing division"<<endl;
		}
	cout<<"output after div is"<<output<<endl;
	

return 0;}
