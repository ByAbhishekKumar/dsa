//https://leetcode.com/problems/counting-bits/
#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> arr;
        int i = 0;
        while(i<n){
            arr.push_back(i);
            i++;
        }
        int size = arr.size();
        while (i < n)
        {
            int j = i ;
            j = j&(j-1);
            


            
        }
        cout << i;
    }
};
int main()
{
    solution s;
    s.countBits(100);
}