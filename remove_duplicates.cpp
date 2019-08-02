include<iostream>
#include<string.h>
#define size 256
using namespace std;

char *remove_duplicates(char str[]); 
int main()
{
    char str[50];
    cout<<"Enter a string:";
    cin>>str;
    cout<<"After removing duplicates,string is:"<<remove_duplicates(str);
    return 0;
}
char *remove_duplicates(char str[])
{
    char temp[size]={0},temp1;
    int i=0,j=0;
    while(*(str+i)!='\0')
    {
        temp1=*(str+i);
        if(temp[temp1]==0)
        {
            temp[temp1]=1;
            *(str+j)=*(str+i);
            j++;
        }
        i++;
    }
    *(str+j)='\0';
    return str;
    
}
