#include <stdio.h>
int bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[6] = {20, -2, 6, -10, 8, 5};
    int x = 6;
    bubbleSort(arr, x);
    printf("%d", x);
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}