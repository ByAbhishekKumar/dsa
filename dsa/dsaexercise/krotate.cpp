#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    int n = a.size();
    int *arr = new int[n];
    int flag = 0;
    vector <int> vec;
    while (k > 0)
    {
        
        if (flag == 0 and k != 0)
        {
            for (int i = 0; i < n; i++)
            {
                int end = a[n-1];
                arr[0] = end;
                arr[i+1] = a[i];
            }
            flag = 1;
        }
        k--; 

        if (flag == 1 and k != 0)
        {   
            for (int i = 0; i < n-1; i++) 
            {
               int end = arr[n-1];
                a[0] = end;
                a[i+1] = arr[i];
            } 
            flag = 0;
        }
        k--;
        
       
    }
    for(int i = 0; i < n; i++){
            vec.push_back(arr[i]);
        }
        delete[] arr;
        if(flag == 0) return a;
        else 
            return vec;
}
int main()
{
    vector<int> vec = {10, 21, 12, 23, 14, 25, 16, 9};
    vector<int> x ;
    x= kRotate(vec,2);
    
    for(int i;i<vec.size();i++){
        cout<<" "<<x[i];
    }
    cout<<endl;
}