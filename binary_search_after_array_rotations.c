#include <stdio.h>
#include<stdlib.h>
    int find_greatest_common_divisor(int small,int large);
    void juggling_algorithm(int gcd,int arr[],int size,int k);
    int binary_search(int n,int search,int array[]);
     
    int main(int argc,int const* argv[])
    {
       int i=0,j=0, n=9, search=0, array[argc-1],k=3;
    for(i=0;i<argc-1;i++)
    {
     array[j]=argv[i];
     j++;
    }
     
       printf("Enter value to find\n");
       scanf("%d", &search);
       int gcd=find_greatest_common_divisor(k,n);
       juggling_algorithm(gcd,array,n,k);
       printf("array after juggling algorithm:\n");
       for(i=0;i<n;i++)
       {
           printf("%d\n",array[i]);
       }
       int loc=binary_search(n,search,array);
     printf("after %d rotations,%d is located at %d.",k,search,loc);

     
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
