include<iostream>
#include<string.h>
using namespace std;
int check_rotated_string(string str1,string str2);
int main()
{
    string str1,str2;
    cout<<"enter string 1:";
    cin>>str1;
    cout<<"enter string 2:";
    cin>>str2;
    int flag=check_rotated_string(str1,str2);
    if(flag==0)
    {
    cout<<"string1 is not a rotation of string 2";
    }
    else
    {
        cout<<"string1 is a rotation of string 2";
    }
    return 0;
}
int check_rotated_string(string str1,string str2)
{
    int flag=0;string concatenated;
    if(str1.length()!=str2.length())
    {
        flag=0;
        return flag;
    }
    else
    {
        int i=0,index;
        char a=str2[0];
        int l=str2.length();
        string concatenated=str1+str1;
        while(concatenated[i]!='\0')
        {
            if(concatenated[i]==a)
            {
                index=i;
                break;
            }
            i++;
        }
        string abc=concatenated.substr(index,index+(l-1));
        int result=strcmp(str2,abc);
        if(result==0)
        {
            flag=1;
            return flag;
        }
        else
        {
            flag=0;
            return flag;
        }
    }
}
