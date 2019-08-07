#include <iostream>
#define N 4
using namespace std;
void multiplication_of_matrix(int arr[][N],int arr1[][N]);
int main()
{
    int arr[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int arr1[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        multiplication_of_matrix(arr,arr1);
    return 0;
}
void multiplication_of_matrix(int arr[][N],int arr1[][N])
{
    int mul[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        mul[i][j]=0;
        for(int k=0;k<N;k++)
        {
         mul[i][j]=mul[i][j]+(arr[i][k]*arr1[k][j]);   
        }
        }
    }
    cout<<"Matrix after multiplication:\n";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
