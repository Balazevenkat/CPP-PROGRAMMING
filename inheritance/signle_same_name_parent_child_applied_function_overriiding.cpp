#include<iostream>
#include<cstdlib>

using namespace std;

class animal
{
  char name[20];
  public:
  void input()
  {
    cout<<"animal"<<endl;  
  }
    
};
class dog:protected animal
//class dog:public animal
{
  char name[20];
    public:
    void input()
    {
        cout<<"dog..."<<endl;
    }  
};

int main()
{
    dog obj;
    obj.input();
    //obj.animal::input();
}
