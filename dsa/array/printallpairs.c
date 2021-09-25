#include <stdio.h>
void printAllPairs(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            printf("( %d,%d )\n", arr[i], arr[j]);
        }
        printf("\n");
    }
}
void main()
{
    int arr[50] = {0};
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);
    printf("\nenter Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printAllPairs(arr, size);
}


