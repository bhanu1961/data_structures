#include<iostream>
#define N 5
using namespace std;

void spiral_rotation(int mid,int arr[][N]);

int main()
{
    int i,j,no_of_rotations=0;
    int arr[N][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int mid=N/2;
    cout<<"enter number of rotations:";
    cin>>no_of_rotations;
    for(i=0;i<no_of_rotations;i++)
    {
    spiral_rotation(mid,arr);
    }
    cout<<"after spiral rotation,array is:\n";
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

void spiral_rotation(int mid,int arr[][N])
{
    int row=0,col=0,i;
    int temp=arr[mid][mid];
    arr[mid][mid]=arr[mid][mid-1];
    arr[mid][mid-1]=arr[mid+1][mid-1];
    for(i=mid-1;i<mid+1;i++)
    {
        arr[mid+1][i]=arr[mid+1][i+1];
    }
    for(i=mid+1;i>mid-1;i--)
    {
        arr[i][mid+1]=arr[i-1][mid+1];
    }
    for(i=mid+1;i>col;i--)
    {
        arr[row+1][i]=arr[row+1][i-1];
    }
    for(i=row+1;i<N-1;i++)
    {
        arr[i][col]=arr[i+1][col];
    }
    for(i=col;i<N-1;i++)
    {
        arr[N-1][i]=arr[N-1][i+1];
    }
    for(i=N-1;i>row;i--)
    {
        arr[i][N-1]=arr[i-1][N-1];
    }
    for(i=N-1;i>col;i--)
    {
        arr[row][i]=arr[row][i-1];
    }
    arr[row][col]=temp;
}
