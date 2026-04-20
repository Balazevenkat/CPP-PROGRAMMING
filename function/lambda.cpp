What is Lambda Function?

A lambda is an anonymous function used for short operations without defining a separate function.

  #include<iostream>
using namespace std;
class Calculator{
    public :
        void multiply(int x,int y){
            auto mul = [](int a,int b){
                return a*b;
            };
            cout<<"multiply = "<<mul(x,y)<<std::endl;
        }
};
int main(){
    Calculator cal;
    cal.multiply(10,20);
}
