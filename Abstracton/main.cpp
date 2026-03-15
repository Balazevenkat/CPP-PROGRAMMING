#include<iostream>
using namespace std;

#include "Shape.cpp"
#include "Square.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"

int main(){
    Shape *ptr = NULL; //Parent class pointer
    char ch;
    cout<<"r:Rectangle  c:Circle  s:Square   e:Exit"<<endl;
    cout<<"Enter the Choice :"<<endl;
    cin>>ch;
    switch(ch){
        case 'r': 
            ptr = new Rectangle;
            break;
        case 'c':
            ptr = new Circle;
            break;
        case 's':
            ptr = new Square;
            break;
        case 'e':
            exit(0);
    }
    if(ptr){
        ptr->Whomi();
        ptr->CalArea();
        ptr->CalPeri();
        ptr->Print();
        delete ptr;
    }
}
