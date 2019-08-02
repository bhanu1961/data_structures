#include <stdio.h>


int main()
{
    int arr[3][3];
    int i,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
    }
    printf("2-D array elements are:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",*(*(arr+i)+j));
        }
        printf("\n");
    }

    return 0;
}

