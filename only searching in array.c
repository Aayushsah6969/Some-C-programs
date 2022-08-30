#include<stdio.h>
int search(int arr[], int key, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
            return -1;
        
    }
}
int main()
{
    int arr[50]={12,45,12,3,89,21,56,90,24,67};
    int key, n=10;
    // search(arr, key);
    printf("Enter the value you want to search: ");
    scanf("%d",&key);
    int result=search(arr, key, n);
    if(result==1)
    {
        printf("It is in the array");
    }
    else{
        printf("it's not in the array");
    }
    return 0;
}