#include<iostream>
using namespace std;

void printArray(int arr[][100],int n,int m){
    cout<<"2D Array is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<< arr[i][j];
        }
        cout<<endl;
    }
} 

int main(){
    int arr[100][100];
    cout<<"Enter n and m respectively: ";
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter Element of: "<<i<< "and"<<j<<": ";
            cin>>arr[i][j];
        }
        
    }
    printArray(arr,n,m);
}