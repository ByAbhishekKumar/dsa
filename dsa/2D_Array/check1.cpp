#include <iostream>
#include<vector>
using namespace std;
bool staircaseSearch(vector<vector<int>> arr, int key)
{
    //if key is not present return {-1,-1}
    int n = arr.size(); // 1
    int m = arr[0].size(); //2
    cout<<n<<" "<<m<<endl;
    if (key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return false;
    }
    int i = 0; // n =1
    int j = m - 1; //m = 2
    while (i <= n - 1 and j >= 0)
    {
        if (arr[i][j] == key)
        {
            return true;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
            i++;
    }
    arr.clear();
    cout<<i<<" "<<j<<endl;
    return false;
}

int main(){
    vector<vector<int> > arr = {{1,3} };          /* {2,3,4},
                    {5,6,7},
                    {16,21,24},
                    {35,36,42} */
    int n = 4,m=3;
    bool x = staircaseSearch(arr,2);
    if(x== false){
        cout<<"NOT FOUND"<<endl;
    }
    else if(x== true){
        cout<<"true"<<endl;
    }
    
    }
