#include <iostream>
#include<string.h>
using namespace std;
int compute_length(string str);
void copy_the_string(string str,string temp);
int compare_two_strings(string str1,string str2);
void concatenate_two_strings(string str1,string str2);
void upper_case_lower_case(string str1);
void find_substring(string str1,int f,int l);
int main()
{
/******find the length of string*****/    
string str;
cout<<"enter string:";
cin>>str;
int length_of_string=compute_length(str);
cout<<"length of a string is:";
cout<<length_of_string<<"\n";
/******copy the string******/
string temp;
copy_the_string(str,temp);
/*****compare two strings*********/
cout<<"Enter the string2:";
cin>>temp;
int flag=compare_two_strings(str,temp);
if(flag>0)
{
    cout<<str<<"is greater than "<<temp<<endl;
}
else if(flag<0)
{
    cout<<temp<<"is greater than "<<str<<endl;
}
else
{
    cout<<str<<"is equal to "<<temp<<endl;
}
/******concatenate two strings*******/
concatenate_two_strings(str,temp);
/*******all to upper case and lower case********/
upper_case_lower_case(str);
/*******find substring in a given string********/
int first,last;
cout<<"enter initial value:";
cin>>first;
cout<<"Enter last value:";
cin>>last;
find_substring(str,first,last);
    return 0;
}
int compute_length(string str)
{
    int l=0,i=0;
    while(str[i]!='\0')
    {
        ++l;
        i++;
    }
    return l;
}
void copy_the_string(string str,string temp)
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        temp[j++]=str[i];
        i++;
    }
    temp[i]='\0';
    cout<<"copied string is"<<temp<<endl;
    
}
int compare_two_strings(string str1,string str2)
{
    int i=0,flag=0;
    int l1=str1.length();
    int l2=str2.length();
    if(l1==l2)
    {
        while(str1[i]!='\0')
        {
            if(str1[i]==str2[i])
            {
                flag=0;
            }
            
            else if(str1[i]>str2[i])
            {
                flag=1;
                break;
            }
            else
            {
                flag=-1;
                break;
            }
            i++;
        }
        return flag;
    }
    else if(l1>l2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void concatenate_two_strings(string str1,string str2)
{
    int i=0,j=0;char temp[50];
    while(str1[i]!='\0')
    {
        temp[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        
        temp[i++]=str2[j];
        j++;
    }
    cout<<temp<<endl;
}
void upper_case_lower_case(string str1)
{
    int i=0;
    while(str1[i]!=0)
    {
        if(str1[i]>=65 && str1[i]<=90)
        {
           str1[i]=str1[i]+32; 
        }
        else if(str1[i]>=97 && str1[i]<=122)
        {
            str1[i]=str1[i]-32;
        }
        i++;
    }
    cout<<str1<<endl;
}
void find_substring(string str1,int f,int l)
{
    int i=0,j=0;string temp;
    for(i=f;i<=l;i++)
    {
        temp[j++]=str1[i];
    }
    cout<<"substring from "<<f<<"to "<<l<<"is:";
    cout<<temp<<endl;
}
