#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
     vector<int> cumsum = {0};
     cumsum[0] = 0;
     int z = A.size();
     int x = 0;
     for(int i=0;i<z;i++){
         cumsum.push_back((x==0? 0 :cumsum[i]) + A[i]);
         x = 2;
     }
     int max = -99999;
     for(int i=0;i<z;i++){
         int sum = 0;
         for(int j=i;j<z;j++){
             sum = cumsum[j] - cumsum[i]; 
             if(sum > max){
                 max = sum;
             }
         }
     }
     return max;
}
int main(){
    vector<int>  arr = {5,0,-1,0,1,2,-1};
    int y = maxSumSubarray(arr);
    cout<<y;
}