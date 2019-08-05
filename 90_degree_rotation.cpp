#include<iostream>
#define N 5
using namespace std;

void find_transpose(int A[][N],int B[][N],int C[][N]);
void reverse_transpose(int B[][N],int C[][N]);

int main()
{
    int B[N][N],C[N][N];
    int A[N][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    find_transpose(A,B,C);
    cout<<"after 90 degree rotation:\n";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
void find_transpose(int A[][N],int B[][N],int C[][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
           B[i][j]=A[j][i]; 
        }
    }
    reverse_transpose(B,C);
    
}

void reverse_transpose(int B[][N],int C[][N])
{
    int i,j,k;
    for(i=0;i<N;i++)
    {
        k=0;
        for(j=N-1;j>=0;j--)
        {
            C[i][k]=B[i][j];
            k++;
        }
    }
}
