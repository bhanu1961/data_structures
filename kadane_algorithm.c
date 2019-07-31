#include <stdio.h>
int max_sum_subarray(int arr[],int size);
int main()
{
    
    int size,i,max,arr[20];
    printf("Enter the size for an array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=max_sum_subarray(arr,size);
    printf("maximum sum of a subarray is:%d",max);
    return 0;
}
int max_sum_subarray(int arr[],int size)
{
    int max=0,max1=0;
    for(int i=0;i<size;i++)
    {
        max=max+arr[0];
        if(max<0)
        {
            max=0;
        }
        if(max1<max)
        {
            max1=max;
        }
    }
    return max1;
}

