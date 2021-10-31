#include<iostream>
#include<vector>
using namespace std;
void sort1(vector<int> &arr,int flag){
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        for(int j=0;j<n-1-i;j++){
            if(flag == 1? arr[j]>arr[j+1] :  arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}
int main(){
    vector<int>  arr = {11,22,13,24,15,6,-7,18};
    sort1(arr,1);
    for(int i = 0; i < arr.size();i++){
        cout<<" "<<arr[i];
    }
}