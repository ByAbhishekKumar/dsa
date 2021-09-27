#include <stdio.h>
#include "printArray.h"
#include "swap.h"
void selectionSort(int arr[], int n)
{

    int k = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j=k=i; j < n; j++)
        {
            
            if (arr[j] < arr[k])
            {
                k = j;
            }

        }
        swap(&arr[i], &arr[k]);
    }
}
int main()
{
    int arr[10] = {4, 5, -6, -2, -4, 66, -20, 15, 30, -8};
    int n = 10;
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}