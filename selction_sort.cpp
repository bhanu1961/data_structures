#include <iostream>

using namespace std;

int main()
{
    int i,j=0,min,loc,k=0,temp,flag=0;
  int arr[5]={64,12,22,11,25};
  for(i=0;i<4;i++)
  {
      min=arr[i];
      temp=min;
      for(j=i+1;j<5;j++)
      {
          if(arr[j]<min)
          {
              min=arr[j];
              loc=j;
              flag=0;
          }
      }
      if(flag==0)
      {
      arr[loc]=temp;
      arr[i]=min;
      flag=1;
      }
  }
cout<<"array elements after selection sort:\n";
for(i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}

