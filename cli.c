#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
int i,arr[argc-1],temp[argc-1],j=0,k=0;
for(i=1;i<argc;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
//printf("size of arr is %d\n",sizeof(arr)/sizeof(arr[0]));
for(i=(sizeof(arr)/sizeof(arr[0]))-1;i>=0;i--)
{
temp[k]=arr[i];
k++;
}
//printf("sze of temp is %d\n",sizeof(temp)/sizeof(temp[0]));
for(i=0;i<(sizeof(temp)/sizeof(temp[0]));i++)
{
printf("%d\n",temp[i]);
printf("\n");
}
return 0;
}
