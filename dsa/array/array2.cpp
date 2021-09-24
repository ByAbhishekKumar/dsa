#include<iostream>
using namespace std;
void printArray(int arr[], int n ){
	int x = n;
	while(n>0)
		cout<<arr[x-(n--)];
	cout<<endl;

}
int main(){
	int arr[] = {2,3,5,3,7,9};
	int n = sizeof(arr)/sizeof(int);int x = n;
	while(n>0)
		cout<<arr[x-(n--)];
	cout<<endl<<endl<<endl;
	printArray(arr,n);

}