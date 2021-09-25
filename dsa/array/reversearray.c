#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int reversearray(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        swap(&arr[s], &arr[e]);
        s = s + 1;
        e = e - 1;
    }
}
void main()
{
    int arr[100] = {0};
    int size, x, key;
    printf("\nenter size of array: ");
    scanf("%d", &size);
    printf("\nEnter an array with %d integer elements to reverse: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    reversearray(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}