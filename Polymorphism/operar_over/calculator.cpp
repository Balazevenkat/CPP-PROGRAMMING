#include<iostream>
#include<cstdlib>
using namespace std;

template <typename any>// accesspt any type data to perform

class clacluator
{
  public:
  any add(any a,any b)
  {
      return a+b;
  }
  any sub(any a,any b)
  {
      return a-b;
  }
  any mult(any a,any b)
  {
      return a*b;
  }
  any divs(any a,any b)
  {
      if(b==0)
      {
          cout<<"division by zero error"<<endl;
          return 0;
      }
      return a/b;
  }
};

int main()
{
    clacluator<int> obj;//creating type in complie time
    
    cout<<"addition: "<<obj.add(10,20)<<endl;
    cout<<"substract: "<<obj.sub(200,20)<<endl;
    cout<<"mult: "<<obj.mult(10,20)<<endl;
    cout<<"div: "<<obj.divs(10,0)<<endl;
    
    clacluator<float> obj1;
    cout<<"addition: "<<obj1.add(10.3,20)<<endl;
    cout<<"substract: "<<obj1.sub(200.35,20)<<endl;
    cout<<"mult: "<<obj1.mult(10.5,20.6)<<endl;
    cout<<"div: "<<obj1.divs(101.1,100)<<endl;
    
}






