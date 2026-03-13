/*
A base class pointer pointing to derived class objects invokes overridden virtual functions through runtime polymorphism.
*/
#include<iostream>
using namespace std;

class Mother{
    protected :
        int age;
        char name[20];
    public :
        Mother(){
            cout<<"Mother Constructor :"<<endl;
            cout<<"Enter the Age :"<<endl;
            cin>>age;
            cout<<"Enter the Name :"<<endl;
            cin>>name;
        }
        virtual void Print(){
            cout<<"Age : "<<age<<endl;
            cout<<"Name : "<<name<<endl;
        }
        virtual void Whomi(){
            cout<<"I am a Mother "<<endl;
        }
        virtual void Qual(){
            cout<<"I am a Graduate"<<endl;
        }
        virtual void Profession(){
            cout<<"I am Home Maker"<<endl;
        }
        virtual void Hobby(){
            cout<<"Gardenning"<<endl;
        }
        virtual ~Mother(){
            cout<<"Mother Constructor"<<endl;
        }
};
class Child1 : public Mother{
    public :
        Child1(){
            cout<<"Child1 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child1"<<endl;
        }
        void Qual(){
            cout<<"BTech"<<endl;
        }
        void Profession(){
            cout<<"Embedded Engineer"<<endl;
        }
        void Hobby(){
            cout<<"Painting"<<endl;
        }
        ~Child1(){
            cout<<"Child1 Destructor"<<endl;
        }
};
class Child2 : public Mother{
    public :
        Child2(){
            cout<<"Child2 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child2"<<endl;
        }
        void Qual(){
            cout<<"MTech"<<endl;
        }
        void Profession(){
            cout<<"SR Engineer"<<endl;
        }
        void Hobby(){
            cout<<"Cricket"<<endl;
        }
        ~Child2(){
            cout<<"Child2 Destructor"<<endl;
        }
};
class Child3 : public Mother{
    public :
        Child3(){
            cout<<"Child3 Constructor"<<endl;
        }
        void Whomi(){
            cout<<"I am a Child3"<<endl;
        }
        void Qual(){
            cout<<"Degree"<<endl;
        }
        void Profession(){
            cout<<"Employee"<<endl;
        }
        void Hobby(){
            cout<<"Drawing"<<endl;
        }
        ~Child3(){
            cout<<"Child3 Destructor"<<endl;
        }
};
int main(){
    Mother *ptr = NULL;
    int choice;
    cout<<"1.Child1  2.Child2  3.Child3"<<endl;
    cout<<"Enter the Choice :"<<endl;
    cin>>choice;
    switch(choice){
        case 1: 
            ptr = new Child1;
            break;
        case 2:
            ptr = new Child2;
            break;
        case 3:
            ptr = new Child3;
            break;
        default :
            cout<<"Invalid Choice"<<endl;
    }
    if(ptr){
        ptr->Whomi();
        ptr->Profession();
        ptr->Qual();
        ptr->Hobby();
        ptr->Print();
        delete ptr;
    }
}
