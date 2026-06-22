//#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    char ch;

   // printf("Enter a character: ");
    //scanf("%c", &ch);
cout<<"Enter a character: ";
  cin>>ch;
    // Condition 1 — check Numeric
    (ch >= '0' && ch <= '9')
        ? cout<<"Numeric";//printf("Numeric\n")
        : cout<<"";

    // Condition 2 — check Uppercase
    (ch >= 'A' && ch <= 'Z')
        ? cout<<"Uppercase Alphabet"<<endl;
        :  cout<<"";

    // Condition 3 — check Lowercase
    (ch >= 'a' && ch <= 'z')
        ?  cout<<"Lowercase Alphabet"<<endl;
        :  cout<<"";

    // Condition 4 — check Special character
    (!( (ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ))
        ?  cout<<"Special Character"<<endl;
        :  cout<<"";

    return 0;
}
