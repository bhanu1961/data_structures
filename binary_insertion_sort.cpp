#include <iostream>

using namespace std;

void insertionSort(int a[],int n);
int binarySearch(int a[],int item,int low,int high);

int main()
{
   int a[]={37,23,0,17,12,72,31,46,100,88,44};
   int n=11,i;
   insertionSort(a,n);
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}

void insertionSort(int a[],int n)
{
    int i,loc,j,selected;
    for(i=1;i<n;i++)
    {
        j=i-1;
        selected=a[i];
        loc=binarySearch(a,selected,0,j);
        while(j>=loc)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=selected;
    }
}

int binarySearch(int a[],int item,int low,int high)
{
    if(high<=low)
    {
        return (item>a[low])?(low+1):low;
    }
    int mid=(low+high)/2;
    if(item==a[mid])
    {
        return mid+1;
    }
    if(item>a[mid])
    {
        return binarySearch(a,item,mid+1,high);
    }
    return binarySearch(a,item,low,mid-1);
}
