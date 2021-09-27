#include <stdio.h>
#include "printArray.h"

void insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int new = arr[i];
        int prev =i-1;
        for(int j= i-1;j>=0;j--){   //this loop returning giviing the index at which new element is inserted.
            if(arr[j]>new ){
                arr[j+1] = arr[j];
                prev = j-1; // becuase here j has previous value of j as loop is false.
            }

        }
        arr[prev+1] = new;

    }
}
int main()
{
    int arr[10] = {-2, 3, -6, 0, 55, 56, -7, 26, 9, -1};
    int n = 10;
    insertionsort(arr, n);
    printArray(arr, n);
}