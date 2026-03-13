#include<iostream>
using namespace std;
/* compile time error because of same name same signature */
int Add(float a,int b){	
    cout<<"float,int"<<endl;
	return a+b;
}
// float Add(float a,int b){
//     cout<<"float,int"<<endl;
// 	   return a+b;
// }
int main(){
	cout<<Add(34.5f,10)<<endl;
	cout<<Add(45.67,89)<<endl;
}
