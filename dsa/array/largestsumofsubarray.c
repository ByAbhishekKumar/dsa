#include <stdio.h>
#include <math.h>

int largestSumofSubarray(int arr[], int n)
{
    int s = 0, e = n - 1, z;
    int sum = 0,max=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if(sum>max)
                max=sum;
            sum = 0;
        }
    }
    
    return max;
}

int main()
{
    int arr[100] = {0};
    int size, large;
    printf("enter size: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    large = largestSumofSubarray(arr, size);
    printf("largest sum of subarray is: %d", large);
    return 0;
}