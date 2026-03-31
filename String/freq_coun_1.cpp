#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void check_frq(char c, char *ptr)
{
    static char prev[256] = {0};   // track already printed characters
    if(prev[(unsigned char)c] == 1)
        return;                     // skip already counted
    
    prev[(unsigned char)c] = 1;     // mark as counted
    
    int cnt = 1;
    while(*ptr)
    {
        if(*ptr == c)
            cnt++;
        ptr++;
    }
    
    cout << c << cnt << " ";
}

int main()
{
    char *str = nullptr;
    int n;

    cout << "Enter size: ";
    cin >> n;
    cin.ignore();

    str = (char*)malloc(n * sizeof(char));

    cout << "Enter string: ";
    fgets(str, n, stdin);
    str[strlen(str)-1] = '\0';

    for(int i = 0; str[i]; i++)
    {
        check_frq(str[i], str + i + 1);
    }

    return 0;
}
