nclude<stdio.h>
int main()
{
    int n,i,j,count=0,sum,arr[10],temp[100],temp_array[100],temp1,index;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        sum=sum+arr[i];
        temp[count]=sum;
        ++count;
        for(j=i+1;j<n;j++)
        {
            sum=sum+arr[j];
            temp[count]=sum;
            ++count;
        }
    }
    for(i=0;i<count;i++)
    {
        temp_array[i]=temp[i];
    }
    
    
    printf("%d elements in temporary array are:\n",count);
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(temp_array[i]>temp_array[j])
            {
                temp1=temp_array[i];
                temp_array[i]=temp_array[j];
                temp_array[j]=temp1;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",temp_array[i]);
    }
temp1=temp_array[count-1];
for(i=0;i<count;i++)
{
    if(temp1==temp[i])
    {
       index=temp1;
       break;
    }
}
int b=index%(n-1);

printf("%d",index);
 
    

    
    return 0;
}
