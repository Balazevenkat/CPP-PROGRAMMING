#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string s1= ("abcde");
    
    string s2= ("fghi");
    
    string s3=s1+s2;// "abc"+"dec"//this type erron when directly
    
    cout<<"string: "<<s3+"jklm";//abcdefghi
    
    cout<<endl;
    
    string s4 (5,'v');// vvvvv
    cout<<s4;
    
    string s5 {s1,2};//cde
    string s6 ("hello all",3);//hel
    
    cout<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;
    
    string s7;
    
    
    getline(cin,s7);
    
    cout<<endl<<s7<<endl;// along string
    
    cout<<s1[1]<<endl;//b
    cout<<s2.at(2)<<endl;//h   //if beyoned number given terimates by a msg says out of reange

    //for(int c:s7)//ascii values of s7 string (char's)
    for(char c:s7)//single single char
    {
        cout<<c<<endl;
    }
    
    cout<<endl;
    
    string s8("Balazevenakt");
    
    cout<<"length: "<<s8.length()<<endl;//12 
    
    string s9 {"Balazevenakt"};
    
    cout<<"size: "<<s9.size()<<endl;//12
    
    cout<<"compare(s8,s9) string's: "<<(s8==s9)<<endl;//true gives 1 () must
    
    cout<<"gratest among(s1,s2): "<<(s1<s2)<<endl;//if ture gives 1 or else 0
    
}
