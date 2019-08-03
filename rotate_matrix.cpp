#include<iostream>
using namespace std;
#define R 4
#define C 4
using namespace std;
void rotate_matrix(int m,int n,int m[R][C])
{
int row=0,col=0;
int prev,curr;
while(row<m && col<n)
{
if(row+1==m && col+1==n)
{
break;
}
prev=m[row+1][col];
for(int i=col;i<n;i++)
{
curr=m[row][i];
m[row][i]=prev;
prev=curr;
}
row++;
for(int i=row;i<m;i++)
{
curr=m[i][n-1];
m[i][n-1]=prev;
prev=curr;
}
n--;
if(row<m)
{
for(int i=n-1;i>=col;i--)
{
curr=m[m-1][i];
m[m-1][i]=prev;
prev=curr;
}
}
m--;
if(col<n)
{
for(int i=m-1;i>=row;i--)
{
curr=m[i][col];
m[i][col]=prev;
prev=curr;
}
}
col++;
}
}
int main()
{
int a[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
rotate_matrix(R,C,a);
return 0;
}
