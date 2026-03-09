#include <iostream>
using namespace std;

class ABC{
    int data1, data2;
    static int cnt;
    public:
        ABC(int a = 0, int b = 0){
            cout << "Default & Parameterised Constructor:"<< endl;
            data1 = a;
            data2 = b;
            cnt++;   
        }
        ABC(ABC &obj){
            cout << "Copy cons:" << endl;
            data1 = obj.data1;
            data2 = obj.data2;
            cnt++;
        }
        void Print(){
            cout << "data1:" << data1 << endl;
            cout << "data2:" << data2 << endl;
            cout << "current no of objs" << cnt << endl;
        }
        static void TotalObjs(){
            cout << "total object created are :" << cnt << endl;
            // cout<<"data1:"<<data1<<endl;
            // error
        }
};
int ABC ::cnt; // defining the static data member outside the class (in  data segment)

int main(){
    ABC ::TotalObjs();//static functions calls directly even not creating obj.
    ABC obj1;
    obj1.Print();
    ABC obj2(10, 20);
    obj2.Print();

    ABC obj3 = obj1;
    obj3.Print();

    ABC ::TotalObjs();
}
