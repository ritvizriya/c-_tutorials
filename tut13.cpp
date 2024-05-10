#include<iostream>
using namespace std;
int main(){
	
	//**array**
	int marks[4]={10,20,30,40};
	int mathMarks[4];
	mathMarks[0]=10;
	mathMarks[1]=20;
	mathMarks[2]=30;
	mathMarks[3]=40;

cout<<"marks";
	cout<<mathMarks[0]<<endl;
	cout<<mathMarks[1]<<endl;
	cout<<mathMarks[2]<<endl;
	cout<<mathMarks[3]<<endl;
	
cout<<"mathmarks";	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	for(int i=0;i<4;i++)
	{
		cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
	}
	
	//**pointers**
	int*p=marks;
	cout<<"the value of marks[0] is "<<*p<<endl;
	cout<<"the value of marks[1] is "<<*(p+1)<<endl;
	cout<<"the value of marks[2] is "<<*(p+2)<<endl;
	cout<<"the value of marks[3] is "<<*(p+3)<<endl;

	return 0;
}
