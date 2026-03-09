#include<iostream>
#include<string>
using namespace std;
int main()
{
string str="hi balaze venkat hi";
string:: iterator it;
for(it=str.begin(); it != str.end();it++)
{
cout<<*it;
}
cout<<endl;
// str += "How are you?";
str.append("How are you?");//same as above


cout<<str;
cout<<endl;

cout<<"size of str is:"<<str.size()<<endl;
cout<<"length of str is:"<<str.length()<<endl;
cout<<"Max size of str is:"<<str.max_size()<<endl;
cout<<"Capacity of str is:"<<str.capacity()<<endl;//may be extra size various shows

cout<<endl;

 cout<<str.substr(3,2);// ba
//cout<<str.find("hi", 1);//last hi index value 17
return 0;
}
