#include <iostream>
#define N 5
using namespace std;

void swap_major_minor(int arr[][N]);
int main()
{
   int arr[N][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
   swap_major_minor(arr);
   cout<<"after swapping major and minor diognal,matrix is:"<<endl;
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
      {
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }

    return 0;
}
void swap_major_minor(int arr[][N])
{
    int i=0,j=0,k=N-1,temp;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==j)
            {
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            k--;
            }
        }
    }
}

