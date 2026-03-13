#include<iostream>
using namespace std;
int Add(int a,int b){
    cout<<"int,int"<<endl;
    return a+b;
}
float Add(float a,float b){
    cout<<"float,float"<<endl;
    return a+b;
}
double Add(double a,double b){
    cout<<"double,double"<<endl;
    return a+b;
}
int main(){
    cout<<Add(10,20)<<endl;
    cout<<Add(1.2f,2.2f)<<endl;
    cout<<Add(10.3,20.67)<<endl;
}
/*
Q . Why use function overloading?

Makes code readable
Allows same operation for different data types
Supports compile-time polymorphism (early binding)

*/
