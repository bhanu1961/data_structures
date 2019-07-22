#include<stdio.h>
#include<stdlib.h>
int find_greatest_common_divisor(int small,int large);
void juggling_algorithm(int gcd,int arr[],int size,int k);
int main(int argc,int argv[])
{
    int arr[argc-1],i=0,j=0,d=0,k=3,temp=0,size=9;
    for(i=0;i<argc-1;i++)
    {
    arr[j]=argv[i];
    j++;
    }
    int gcd=find_greatest_common_divisor(k,size);
    printf("GCD of number of raotaions and size of an array:%d\n",gcd);
    juggling_algorithm(gcd,arr,size,k);
    printf("after %d rotations by using juggling algorithm:\n",k);
    for(i=0;i<size;i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
    
}
int find_greatest_common_divisor(int small,int large)
{
    int GCD=1,i=2;
    while(small!=1)
    {
        if((small%i==0)&&(large%i)==0)
        {
            GCD=GCD*i;
            small=small/i;
            large=large/i;
        }
        else if((small%i!=0)&&(large%i)!=0)
        {
            i++;
        }
        else
        {
            GCD=1;
        }
    }
    return GCD;
}
void juggling_algorithm(int gcd,int arr[],int size,int k)
{
    int i=0,j=0,temp,d;
    for(i=size-1;i>=size-gcd;i--)
    {
        temp=arr[i];
        d=(i+k)%size;
        for(j=i;j>d;j=j-k)
        {
            arr[j]=arr[j-k];
        }
        arr[d]=temp;
    }
}

