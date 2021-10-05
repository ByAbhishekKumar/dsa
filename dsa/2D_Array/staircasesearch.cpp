#include <iostream>
using namespace std;
pair<int, int> staircaseSearch(int arr[][4], int n, int m, int key)
{
    //if key is not present return {-1,-1}

    if (key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0;
    int j = m - 1;
    while (i <= n - 1 and j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
            i++;
    }
    return { i, j  };
}

int main(){
    int arr[][4] ={ {2,3,4},
                    {5,6,7},
                    {16,21,24},
                    {35,36,42}};
    int n = 4,m=3;
    pair<int,int> x = staircaseSearch(arr,n,m,42);
    cout<<x.first<<" "<<x.second<<endl;
    }
