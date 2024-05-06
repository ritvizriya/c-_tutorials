#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int b=45;
	cout<<"value of b  : "<<b<<endl;
	b=35;
	cout<<"value of b is : "<<b<<endl;
	//**constants**
	const int a=45;
	cout<<"value of a is : "<<a<<endl;
	//a=35;   result an errror 
	cout<<"value of a is : "<<a<<endl;
	
	//**manipulators**->used for formatting 
/*2 types of manipulators : 
 1. endl;  
 2. setw, used with header file iomanip -> gives defined spaces*/
 int c=11;
 cout<<"value of c is : "<<c<<endl;
 cout<<"value of c is : "<<setw(4)<<c<<endl;
 
 //**operator presedence**
 
	
	return 0;
}
