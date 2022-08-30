#include<stdio.h>
int main()
{
    int arr[100];
    int i, n=5;
    printf("Enter the values in array: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are: \n");
    for(i=1; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    int j, temp;
    for(i=1; i<=n-1; i++)
    {
        for(j=1+i; j<=n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Elements in sorted array are: \n");
    for(i=1; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}