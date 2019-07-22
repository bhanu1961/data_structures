#include<stdio.h>
#include<stdlib.h>
int main(int argc,int argv[])
{
    int arr[],j, num1=0,num2=0,gcd=1,small=0,large=0,i=2;
for(i=0;i<argc-1;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
small=arr[1];
large=arr[2];

    if(num1>num2)
    {
        small=num2;
        large=num1;
    }
    else
    {
        small=num1;
        large=num2;
    }
    while(small!=1)
    {
        if((small%i==0)&&(large%i==0))
        {
            gcd=gcd*i;
            small=small/i;
            large=large=large/i;
        }
        else if((small%i!=0)&&(large%i!=0))
        {
            i++;
        }
        else
        {
            gcd=1;
        }
    }
    printf("gcd of two numbers is:%d",gcd);
    return 0;
}
