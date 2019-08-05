#include <iostream>
#define R 5
#define C 5
using namespace std;
void clockwise(int arr[R][C],int m,int n);
void anticlockwise(int arr[R][C]);
void print_array(int arr[R][C]);
int main()
{
    int i,no_of_rotations; 
    int arr[R][C]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    cout<<"enter number of rotations:";
    cin>>no_of_rotations;
    for(i=0;i<no_of_rotations;i++)
    {
        clockwise(arr,R,C);
        anticlockwise(arr);
    }
    cout<<"after "<<no_of_rotations<<"array is:\n";
    print_array(arr);
    return 0;
}
void clockwise(int arr[R][C],int m,int n)
{
    int row=0,col=0,i=0;
    int temp=arr[row][col];
    for(i=row;i<(m-1)-row;i++)
    {
        arr[i][col]=arr[i+1][col];
    }
    for(i=col;i<(n-1)-col;i++)
    {
        arr[m-1][i]=arr[m-1][i+1];
    }
    for(i=(n-1)-col;i>col;i--)
    {
        arr[i][n-1]=arr[i-1][n-1];
    }
    
    for(i=(m-1)-col;i>col+1;i--)
    {
        arr[m-1][i]=arr[m-1][i-1];
    }
    arr[row][col+1]=temp;
    
}
void anticlockwise(int arr[R][C])
{
    int row=1,col=1,m=R-1,n=C-1;
    int i=0,temp;
    temp=arr[row][col];
    for(i=col;i<n-col;i++)
    {
        arr[row][i]=arr[row][i+1];
    }
    for(i=row;i<m-row;i++)
    {
        arr[i][n-col]=arr[i+1][n-col];
    }
    for(i=n-row;i>row;i--)
    {
        arr[m-col][i]=arr[m-col][i-1];
    }
    for(i=m-row;i>row+1;i--)
    {
        arr[i][row]=arr[i-1][row];
    }
    temp=arr[row+1][col];
}
void print_array(int arr[R][C])
{
    int i=0,j=0;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

