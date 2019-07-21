#include<stdio.h>
void first_half_rotation_to_right(int first_size,int arr[],int k);
void second_half_rotation_to_left(int second_size,int arr[],int k);
int main(int argc,int *const argv[])
{
    int ,j=0,arr[argc-1],size=8,first_size=0,second_size=0,k=2,i=0;
    for(i=0;i<argc-1;i++)
    {
    arr[j]=atoi[i];
    j++;
    }
    first_size=(size/2)-1;
    second_size=first_size+1;
    first_half_rotation_to_right(first_size,arr,k);
    second_half_rotation_to_left(second_size,arr,k);
    printf("after rotations:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
void first_half_rotation_to_right(int first_size,int arr[],int k)
{
    int i=0,j=0,temp[k];
    for(i=first_size-(k-1);i<=first_size;i++)
    {
        temp[j]=arr[i];
        ++j;
    }
    for(i=first_size;i>=first_size-(k-1);i--)
    {
        arr[i]=arr[i-k];
    }
    for(i=0;i<j;i++)
    {
        arr[i]=temp[i];
    }
}
void second_half_rotation_to_left(int second_size,int arr[],int k)
{
    int i=0,j=0,temp1[k];
    int n=8;
    for(i=second_size;i<=second_size+(k-1);i++)
    {
        temp1[j]=arr[i];
        ++j;
    }
    int count=j;
    for(i=second_size;i<=second_size+(k-1);i++)
    {
        arr[i]=arr[i+k];
    }
    for(i=n-1;i>=(n-1)-count;i--)
    {        
        arr[i]=temp1[--j];
    }
}
