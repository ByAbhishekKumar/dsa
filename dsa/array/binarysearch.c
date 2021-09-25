#include<stdio.h>
int binarysearch(int arr[],int n,int key){
	int s=0,e = n-1,mid;
	while(s<=e){
		mid = (s + e)/2;
		if(arr[mid] == key)
			return mid;
		else if(arr[mid]<key)
			s = mid + 1;
		else 
			e = mid - 1;
		
	}
	return -1;	

}
void main(){
	int arr[100] = {0};
	int size,x,key;
	printf("\nenter size of array: ");
	scanf("%d", &size);
	printf("\nEnter a sorted interger array with %d elements: ",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}	
	printf("\nEnter element to search: ");
	scanf("%d",&key);
	x = binarysearch(arr,size,key);
	if(x!=-1)
		printf("Index of element is: %d\n",x);
	else{
		printf("element not found!\n");}


}