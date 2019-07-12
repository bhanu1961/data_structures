#include<stdio.h>
int main()
{
int arr[20],temp,f,l,m,n,x;
scanf("%d",&n);
printf("Enter the value of x:%d",x);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i];
}
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
f=0;l=n-1;
m=(f+l)/2;
while(f<=l)
{
if(arr[m]<x)
{
f=m+1;
}
else if(arr[m]==x)
{
printf("%d found at location %d",x,m+1);
break; 
}
else
{
l=m-1;
m=(f+l)/2;
}
}
return 0;
}
