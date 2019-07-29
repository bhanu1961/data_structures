include<iostream>
#include<string.h>
using namespace std;
int is_palidrome(char str[]);

int main()
{
    int flag=is_palidrome("aabbcaa");
    if(flag==1)
    {
        cout<<"string is palidrome.";
    }
    else
    {
        cout<<"string is not a palidrome";
    }
    return 0;
}
int is_palidrome(char str[])
{
    int flag=0;
    int f=0;
    int l=strlen(str)-1;
    while(f<l)
    {
        if(str[f++]!=str[l--])
        {
            flag=0;
            break;
        }
        flag=1;
    }
    return flag;
    
}
