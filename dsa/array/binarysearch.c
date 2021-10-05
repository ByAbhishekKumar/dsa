#include<stdio.h>
int binarysearch(int arr[],int n,int key){
	int s=0,e = n-1,mid; //declering middle,start and end index
	while(s<=e){
		mid = (s + e)/2;  //calculate current middle index
		if(arr[mid] == key)   // checking if middle lelement is equal to the key to search if yes than return its index
			return mid;
		else if(arr[mid]<key) //if middle is less than key then set start index = middle element index +1 
			s = mid + 1;
		else 
			e = mid - 1;  //if middle is greater than key then end = middle -1 ;
		
	}
	return -1;	// if index not found return -1

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