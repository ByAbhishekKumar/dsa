#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    int n = a.size();
    while (k>0)
    {
        int end = a[n - 1];
        int start = a[0];
        for (int i = 0; i < n; i++)
        {
            
            if ((n - 1) - i > 0)
            {
                a[(n - 1) - i] = a[((n - 1) - i)-1];
            }
            if ((n - 1) - i == 0)
            {
                a[0] = end;
            }
        }
        k--;
    }
    return a;
}
int main()
{
    vector<int> vec = {10, 21, 12, 23, 14, 25, 16, 9};
    vector<int> x;
    x = kRotate(vec, 3);

    for (int i; i < vec.size(); i++)
    {
        cout << " " << x[i];
    }
    cout << endl;
}