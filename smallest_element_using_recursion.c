include <stdio.h>
int find_smallest_using_pivot(int arr[],int l);
int main()
{
    int i,size,arr[20],l,small;
    printf("Enter the size for an array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=0;
    int pivot=find_smallest_using_pivot(arr,l);
    small=pivot+1;
    printf("%d is a smallest element located at %d in an array.",arr[small],small);
    return 0;
}
int find_smallest_using_pivot(int arr[],int l)
{
    if(arr[l]>arr[l+1])
    {
        return l;
    }
    return find_smallest_using_pivot(arr,l+1);
}
