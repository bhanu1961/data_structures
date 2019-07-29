include<iostream>
#include<string.h>
using namespace std;
string move_upper_to_end(string str);
void insert_string_into_another(string str,string str1);
int main()
{
    string str,str1;
    cout<<"Enter string1:";
    cin>>str;
    string temp=move_upper_to_end(str);
    cout<<"after adding uupercase letters to end of a string:"<<temp<<endl;
    cout<<"enter string2:";
    cin>>str1;
    insert_string_into_another(str,str1);
    return 0;
}
string move_upper_to_end(string str)
{
    int length=str.length();
    int i=0;
    string upper="";
    string lower="";
    for(i=0;i<length;i++)
    {
        char ch=str[i];
        if(ch>=65 && ch<=90)
        {
            upper=upper+ch;
        }
        else
        {
            lower=lower+ch;
        }
    }
    return lower+upper;
}
void insert_string_into_another(string str,string str1)
{
    int i;
    cout<<"Enter an index i which string must be inserted:";
    cin>>i;
    cout<<"after adding string to another string:"<<str.insert(i,str1);
}
