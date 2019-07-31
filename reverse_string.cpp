#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j;string str;
    char temp;
    cout<<"Enter a string:";
    cin>>str;
    j=str.length()-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<"reversed string is:"<<str;
    return 0;
}
