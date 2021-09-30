
#include <stdio.h>
//#include "printArray.h"
#include "countsort.h"

int main()
{
    int arr[10] = {4, 5, 6, 2, 4, 66, 20, 15, 30, 8};
    int n = 10;
    countSort(arr, n);
    
    return 0;
}