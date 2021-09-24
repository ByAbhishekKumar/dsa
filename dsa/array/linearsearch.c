#include<stdio.h>
#include<stdlib.h>
int linearsearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		//check and return index of key element if it is present
		 if(arr[i]== key){
			return i;
		}
	}
	return -1;

}
void main(int argc, char *argv[]){
	int arr[] = {2,5,6,3,6,9,5,3,4,8};
	int size = sizeof(arr)/sizeof(int);
	int key = (int)((argv[1][0]) - 48);  //using command line arguments accesing first character in the char array 
	
	int x = linearsearch(arr,size,key);
	if(x!=-1){
		printf("\nIndex of key is : %d ",x);
	}
	else{
		printf("\nkey not found!");
	}


}