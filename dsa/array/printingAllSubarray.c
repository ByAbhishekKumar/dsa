#include <stdio.h>

void printAllPairs(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i ; j < size; j++)
        {
            for(int k=i;k<=j;k++){
                printf(" %d ",arr[k]);
            }
            printf("\n");
            
        }
        printf("\n");
        
    }
}
    int main()
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