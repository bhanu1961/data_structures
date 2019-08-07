#include <iostream>
#define N 4
using namespace std;
void rotate_matrix_by_180(int arr[][N]);
int main()
{
    int arr[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate_matrix_by_180(arr);
    return 0;
}
void rotate_matrix_by_180(int arr[][N])
{
    cout<<"Matrix after 180 rotation:\n";
    for(int i=N-1;i>=0;i--)
    {
        for(int j=N-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
