#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,const char*argv[])
{
char str[]="hello world";
char str1[]"hello world";
char str2[]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
char str3[12];
strcpy(str3,str2);
int size=strlen(str1);
printf("%s \n",str);
printf("%s \n",str1);
puts(str);
puts(str1);
printf("%u",str2);
printf("\n");
printf("%u \n",str3);
printf("%d",size);
return 0;
}
