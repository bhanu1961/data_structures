#include<stdio.h>
#include<stdlib.h>
int main(int argc,char const *argv[])
{
int size=argc-1;
int arr[size];
for(int i=0;i<size;i++)
{
arr[i]=atoi(argv[i+1]);
}
int *ptr=arr;
int temp,size1=size-1;
for(int i=0;i<size;i++)
{
temp=ptr[size1];
ptr[size1]=ptr[i];
ptr[i]=temp;
size1--;
}
for(int i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}



