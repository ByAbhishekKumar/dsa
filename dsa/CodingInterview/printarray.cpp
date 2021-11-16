#include<iostream>
using namespace std;
void printarray(char *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int N;
    cin >> N;
    //cout<<endl;
    char * arr = new char[N];
    cin>>arr;
    cout<<endl;
    
    printarray(arr,N);
    delete[] arr;
}