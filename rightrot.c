#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
int temp=0,arr[argc-2],i=0,j=0,k=0;
for(i=0;i<argc-1;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
int x=3;
for(i=0;i<x;i++)
{
 temp=arr[argc-1];
for(k=argc-1;k>0;k--)
{
arr[k]=arr[k-1];
}
arr[0]=temp;
}
for(i=0;i<argc-1;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
