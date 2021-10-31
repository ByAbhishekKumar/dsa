//implementing insertion sort

#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a, bool flag)
{ //insertion sort
    int curr;
    int offset;
    int n = a.size();
    if (flag == 1)
    {
        for (int i = 1; i < n; i++)
        {
            curr = i;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[curr] < a[j])
                {
                    offset = j;
                }
            }
            int temp = a[curr];
            for (int k = curr; k >= offset + 1; k--)
            {
                a[k] = a[k - 1];
            }
            a[offset] = temp;
        }
    }
    if (flag == 0)
    {

        for (int i = 1; i < n; i++)
        {
            curr = a[i];
            int j = i-1;
            while(curr>a[j] && j>=0)
            {
                
                     a[j+1] = a[j];
                    j--;
                
            }
            a[j+1] = curr;
        }
    }
}
int main()
{
    vector<int> a = {100, 22, 31, 41, 15, 61, 17, 10};
    sort(a, 0);
    vector<int>::iterator it = a.begin();
    for (it = a.begin(); it != a.end(); ++it)
    {
        cout << " " << *it;
    }
    cout << endl;
}