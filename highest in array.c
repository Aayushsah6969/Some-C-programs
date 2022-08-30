#include<stdio.h>
int main()
{
    int i;
    int arr[5]={12, 34, 45, 67, 78};
    int high=arr[0];
    
    for(i=0; i<5; i++)
    {
        if(arr[i]>high)
        {
            high=arr[i];
        }
    }
    printf("The highest element is: %d",high);
    return 0;
}
