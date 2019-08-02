#include<iostream>
using namespace std;
void find_transpose(int arr[3][3],int arr1[3][3]);
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i=0,j=0;
int arr1[3][3];
    find_transpose(arr,arr1);
    cout<<"matrix elements after transpose is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
void find_transpose(int arr[3][3],int arr1[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr1[i][j]=arr[j][i];
        }
    }
}
