#include <stdio.h>
int bubbleSort(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (flag = 0)
            return 0;
    }
}
int main()
{
    int arr[10] = {20, -2, 6, -10, -3, 5, -55, 15, 12, 7};
    int x = 10;
    bubbleSort(arr, x);
    printf("%d", x);
    printf("\n");

    for (int i = 0; i < x; i++)

        printf(" %d ", arr[i]);

    printf("\n");
}