#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		//check and return index of key element if it is present
		 if(arr[i]== key){
			return i;
		}
	}
	return -1;

}
int main(int argc, char *argv[]){
	int arr[] = {2,5,6,3,6,9,5,3,4,8};

	int size = sizeof(arr)/sizeof(int);
	cout<<"Enter key to Search: ";
	int key; //= (int)((argv[1][0]) - 48);  //using command line arguments accesing first character in the char array 
	cin>>key;
	int x = linearsearch(arr,size,key);
	if(x!=-1){
		cout<<"index of key is : "<<x<<endl;
	}
	else{
		cout<<"key not found!"<<endl;
	}


}