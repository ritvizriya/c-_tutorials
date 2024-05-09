#include<iostream>
using namespace std ;
int main(){
	//**control structures**
/*1.sequence  2. selection  3. loop*/

//*selection control : if-else,else-if ladder *
//int age ;
//cout<<"tell me your age : "<<endl;
//cin>>age;
//if(age<18){
//	cout<<"go and play dude ! "<<endl;}
//else if(age==18){
//	cout<<"you can vote for the first time ! "<<endl;
//}
//else{
//	cout<<"you can vote !"<<endl;
//}


//*selection control : switch statement *
int age1;
cout<<"tell me your age : "<<endl;
cin>>age1;
switch(age1){
	case 18:
		cout<<"you are grown !"<<endl;
		break;
	dafault:
		cout<<"you are a champion !";
		break;
	}
	
	return 0;
}
