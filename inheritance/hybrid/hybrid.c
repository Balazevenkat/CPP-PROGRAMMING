#include<iostream>
#include<cstring>
using namespace std;

#include"Student.cpp"
#include"ECE.cpp"
#include"Sport.cpp"
#include"Result.cpp"

int main()
{
	Result robj;
	robj.CalTotmarks();
	robj.CalPer();
	robj.CalGrade();

	robj.SPrint();
	robj.EPrint();
	robj.Print();
	robj.RPrint();
}
