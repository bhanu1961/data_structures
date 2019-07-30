#include<iostream>
#include<string.h>
#define size 256
using namespace std;
char find_maximum_character(char str[]);
int main()
{
    char str[50];
    cout<<"Enter string:";
    cin>>str;
    cout<<"maximum character occuring in a string:"<<find_maximum_character(str);
  return 0;
}
char find_maximum_character(char str[])
{
    char res;int temp[size]={0},i,max=0;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        temp[str[i]]++;
        if(temp[str[i]]>max)
        {
            max=temp[str[i]];
            res=str[i];
        }
    }
    return res;
}
