// //call by value
// #include<iostream>
// using namespace std;
// void swap(int x,int y){
//     int t=x;
//     x=y;
//     y=t;
// }
// int main(){
//     int a=10,b=20;
//     cout<<"a="<<a<<" b="<<b<<endl;
//     swap(a,b);
//     cout<<"a="<<a<<" b="<<b<<endl;
// }

// //call by address
// #include<iostream>
// using namespace std;
// void swap(int *p,int *q){
//     int t=*p;
//     *p=*q;
//     *q=t;
// }
// int main(){
//     int a=10,b=20;
//     cout<<"a="<<a<<" b="<<b<<endl;
//     swap(&a,&b);
//     cout<<"a="<<a<<" b="<<b<<endl;
// }

//call by reference
#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int t=x;
    x=y;
    y=t;
}
int main(){
    int a=10,b=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
}
