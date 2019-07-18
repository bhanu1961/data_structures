#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
int arr[argc-1],temp[argc-1],i,j;
for(i=0;i<argc;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
if(arr[i]>0 && i%2==0)
{
temp[i]=arr[i];
}
temp[i]=arr[i];
}
printf("ALTERNATE ELEMENTS ARE:");
for(i=0;i<(sizeof(temp)/sizeof(temp[0]));i++)
{
printf("%d\n",temp[i]);
}
return 0;
}
