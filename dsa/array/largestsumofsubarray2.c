
#include<stdio.h>

int largestSumofSubarray(int arr[100], int n)
{
    int max = -99999;
    int sum = 0;
    
    int cusum[n+1];
    
    cusum[0]=0;
    for(int i = 0; i < n; i++) {
        cusum[i+1]=cusum[i]+arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum=cusum[j+1] - cusum[i];
            
            if(sum>max) {
                max=sum;
            }
        }
    }
    return max;
}
int main(){
    int arr[] = {5,6,9,8,-10,-5,-6,12};
    int n = 8,x;
    int i=0;
    printf("array is: ");
    while(i<n){
        printf(" %d ",arr[i]);
        i++;
    }
    printf("\n");
    x = largestSumofSubarray(arr,n);
    printf("Largest sum of subarray is: %d",x);
}