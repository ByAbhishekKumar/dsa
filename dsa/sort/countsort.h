#include <stdlib.h>
void countSort(int arr[], int n)
{

    int max = -99999;
    int x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int *arr1 = (int *)malloc((max+1 ) * sizeof(int));
    for (int i = 0; i < max +1; i++)
    {
        arr1[i] = 0;
    }
   
    for (int i = 0; i < n ; i++)
    {
        arr1[arr[i]]++; 
    }
    
    printf("\n");
    for(int i=0;i<max+1;i++){

        printf(" %d", arr1[i]);  

    }
    printf("\n");
    int i = 0;
    int j = 0;
    int y =0;
    for (i=0;i < max+1 ;i++)
    {
        
        if (arr1[y] > 0)
        {
            arr[j++] = y;
            arr1[y]--;
        }
        else
            y++;
        
    }
    printf("\n");
    for(int i=0;i<n;i++){
        
        printf(" %d", arr[i]);
        
    }
    printf("\n");
    
    
}