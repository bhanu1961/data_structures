#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
char str1[20],temp[20],str2[20];
cout<<"Enter String1:";
cin>>str1;
cout<<"Enter String2:";
cin>>str2;
strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);
cout<<str1<<endl<<str2;
return 0;
}

~        
