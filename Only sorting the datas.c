#include<stdio.h>
int main()
{
    int arr[10]={10, 30, 60, 70, 100, 80, 90, 50, 20, 40};
    int i, j, temp, n=10;
    for(i=0; i<=n-1; i++)
    {
        for(j=1+i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Elements in sorted array is: \n");
    for(i=0; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}