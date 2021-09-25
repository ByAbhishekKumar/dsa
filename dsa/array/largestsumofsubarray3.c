#include <stdio.h>
#include <math.h>

int largestSumofSubarray(int arr[], int n)   //O(N) time, kadane's algorithm
{
    int curr=0;int max=0;
    for (int i = 0; i < n; i++)
    {
        curr = curr + arr[i];
        if(curr<0){
            curr = 0;
        }
        if(max < curr){
            max = curr;
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