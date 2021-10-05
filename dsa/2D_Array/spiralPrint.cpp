#include<iostream>
#include<vector>
using namespace std;
void spiralPrint(int arr[][6],int n,int m){
    vector<int> vec;
    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;
    while(top < bottom && left < right){
        for(int i = left; i <=right; i++){
             vec.push_back(arr[top][i]);
        }
        top++;
        for(int i=top; i <=bottom; i++){
            vec.push_back(arr[i][right]);
        }
        right--;
        for(int i=right;i>=left; i--){
           if(top == bottom){
                break;
            }
            vec.push_back(arr[bottom][i]);
        }
        
        bottom--;
        for(int i=bottom;i>=top; i--){
            if(left==right){
                break;
            }
            vec.push_back(arr[i][left]);
        }
        
        
        
        left++;
    }
    for(int x:vec){
        cout<<" "<<x;
    }
    cout<<endl;
    
}
int main(){
    int arr[][6] = {{20,22,18,45,62},
                    {32,42,16,12,8},
                    {72,68,9,63,23},
                    {21,26,28,63,46},
                    {10,5,8,13,15}};
    int n = 5;
    int m = 5;
    spiralPrint(arr,n,m);
}