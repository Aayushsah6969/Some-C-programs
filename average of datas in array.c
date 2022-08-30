#include<stdio.h>
int main()
{
    int i;
    int arr[5]={12, 13, 14, 15, 16};
    float avg=0;
    for(i=0; i<=4; i++)
    {
        avg=avg+arr[i];
    }
    avg=avg/5;
    printf("The average is %f",avg);
    return 0;
}
