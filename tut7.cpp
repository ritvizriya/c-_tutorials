#include<iostream>
using namespace std;

int c=10; //global

int main()
{
	//**glocal and global variables**
	
	int a=20; //local
	int b=10;
	int c=a+b;
	cout<<"the value of local sum c is : "<<c<<endl;
	cout<<"the value of global c is : "<<::c<<endl;//::*scope resolution*
/*local variable->higher preferance so to get the value of global variable 
scope resolution operator is used*/

	 //**literals**
	 
	 //**refrence variables**->address of another variable
	 
	 int x=10;
	 int & y=x;
	 cout<<x<<endl;
	 cout<<y<<endl;
	 
	 //**typecasting**->type conversion 
	 
	 int p=10;
	 cout<<"p="<<(float)p;
	 
	  
	return 0;
}
