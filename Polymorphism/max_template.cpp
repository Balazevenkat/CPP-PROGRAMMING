#include<iostream>
using namespace std;
template<typename any>
const any & Max(const any &a,const any &b){
    return (a>=b) ? a : b;
}
int main(){
    cout<<Max(10,20)<<endl;
    cout<<Max(10.78,20.74)<<endl;
    cout<<Max('c','A')<<endl;
}
