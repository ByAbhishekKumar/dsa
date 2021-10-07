#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> vec,int val){
        vector<int> arr;
        int max = -99999;
        for(int x:vec){
            if(x<val){
                if(x>max){
                    max = x;
                }
            }             
        }      
        return max;
}
int main(){
    vector<int>  arr = {-1,-1,2,3,5};
    
    int max = lowerbound(arr,4);
    cout<<max;

}