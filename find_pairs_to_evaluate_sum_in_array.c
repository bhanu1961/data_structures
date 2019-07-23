#include <stdio.h>
void array_sort(int arr[],int size);
void print_array(int arr[],int size);
void find_pairs_to_evaluate_sum(int arr[],int size);

int main()
{
  int n,arr[20],i;
  printf("Enter size of an array:");
  scanf("%d",&n);
  printf("Enter %d elemnets of an array:",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  array_sort(arr,n);
  printf("sorted array is:\n");
  print_array(arr,n);
  printf("Pairs of elements to evaluate sum in an array:");
  find_pairs_to_evaluate_sum(arr,n);

  return 0;
}
void array_sort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
     {
         if(arr[i]>arr[j])
         {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
    }
}
void print_array(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void find_pairs_to_evaluate_sum(int arr[],int size)
{
    int a,b,i;
    {
        for(i=2;i<size;i++)
        {
            if(arr[i]==(arr[i-1]+arr[i-2]))
            {
                a=arr[i-2];
                b=arr[i-1];
                printf("{%d,%d} ",a,b);
            }
        }
    }
    
}
