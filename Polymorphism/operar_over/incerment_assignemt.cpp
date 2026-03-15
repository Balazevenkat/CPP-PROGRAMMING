#include<iostream>
#include<cstdlib>

using namespace std;

class matrix
{
  int m[2][2];
  public:
  matrix()
  {
      cout<<"matrix contructor"<<endl;
      cout<<"Enter matrix: "<<endl;
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              cin>>m[i][j];
          }
      }
  }
  void print()
  {
      cout<<"matrix: "<<endl;
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              cout<<m[i][j]<<" ";
          }
          cout<<endl;
      }
  }
  matrix& operator=( const matrix &a)
  {
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              m[i][j]=a.m[i][j];
          }
      }
      return *this;
  }
  matrix operator++(int)
  {
      matrix tem= *this;
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              m[i][j]++;
          }
      }
      
      return tem;
  }
  ~matrix()
  {
      cout<<"matrix deconstructor"<<endl;
  }
};

int main()
{
    matrix m1;
    cout<<"**Matrix1**"<<endl;
    m1.print();
    
    matrix m2;
    cout<<"**Matrix2**"<<endl;
    m2.print();
    
    cout<<"Matrix assigned"<<endl;
    m2=m1;
    
    cout<<"After assigned"<<endl;
    m2.print();
    
    cout<<"\n post increment"<<endl;
    m2 = m1++;
    
    cout<<"..After post increment.."<<endl;
    m1.print();
    
    m2.print();
    
} //not getting the output for ++ operator?
