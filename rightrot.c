#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
int arr[argc-1],temp[argc-1],i,j=0,k=0,size,size1;
for(i=1;i<argc-1;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
for(i=0;i<5;i++)
{
k=arr[argc-1];
for(i=argc;i>1;i--)
{
arr[i-1]=arr[i-2];
}
arr[0]=k;
}
for(i=0;i<argc;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
