#include <stdio.h>

int addarr (int arr[], int size)
{
    int result = 0;
    for (int i = 0; i<size; i++)
    {
    result = result + arr[i];
    }
    return result;
}
void main()
{
    int size=3;
    int arr[3]={2,4,6};
    printf("the result is %d",addarr(arr,size));
}