#include<iostream>
using namespace std;

class ABC{
	mutable int data1;  //mutable is a keyword that allows a class data member to be modified even inside a const object.
	int data2;
	public :
        ABC(){
			cout<<"enter the data1:"<<endl;
			cin>>data1;
			cout<<"enter the data2:"<<endl;
			cin>>data2;
		}
		void Print()const{
            ++data1;
			cout<<"data1:"<<data1<<endl;
			cout<<"data2:"<<data2<<endl;
		}
		void Inc(){
			++data1;
			++data2;
		}
};

int main(){
    ABC obj;
    obj.Print();
    obj.Inc();
    obj.Print();

    const ABC obj1;
    obj1.Print();
}
