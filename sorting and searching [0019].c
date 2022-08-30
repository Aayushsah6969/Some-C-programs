#include<stdio.h>

int sorting(int arr[], int n )
{
    int temp;
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    return 0;
}


int search(int arr[],int key,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }

    return -1;
}

int main()
{
    int arr[50]={12,45,12,3,89,21,56,90,24,67};
    int i,n=10;

    printf(" the values in the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\n");

    sorting(arr,n);

    printf(" the sorted values in the array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\n");
    int key;
    printf("Enter the value you want to search in an array: ");
    scanf("%d",&key);

    int result = search(arr,key,n);

    if(result==1)
    {
        printf("%d is present in the array ", key);
    }
    else
    {
        printf("%d is not present in the array ", key);
    }
    return 0;
}
