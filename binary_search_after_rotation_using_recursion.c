lude <stdio.h>
int m_binary_search(int arr[],int low,int high,int num);
int main()
{
    int size,i,arr[20],num;
    printf("Enter the size for an array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int low=0;
    int high=size-1;
    printf("Enter the value of element to find:");
    scanf("%d",&num);
    int temp=m_binary_search(arr,low,high,num);
    if(temp==-1)
    {
        printf("cannot found the element");
    }
    else
    {
        printf("%d is found at %d",num,temp);
    }

    return 0;
}
int m_binary_search(int arr[],int low,int high,int num)
{
    if(low>high)
    {
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==num)
    {
        return mid;
    }
    if(arr[low]<=arr[mid])
    {
        if(num>=arr[low]&&num<=arr[mid])
        {
            return m_binary_search(arr,low,mid-1,num);
        }
        return m_binary_search(arr,mid+1,high,num);
    }
    if(num>=arr[mid+1]&&num<=arr[high])
    {
        return m_binary_search(arr,mid+1,high,num);
    }
    return m_binary_search(arr,low,mid-1,num);
}
