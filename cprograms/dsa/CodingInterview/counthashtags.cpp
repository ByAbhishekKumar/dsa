#include <iostream> // print total number of hashtags in each line input,(a hashtags start and ends with '#').
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int countHashTags(char *arr, int n)
{
    int count = 0;
    int totalNumberOfHashtags = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '#')
        {
            // cout << arr[i];
            count++;
        }
    }
    totalNumberOfHashtags = (int)(floor(count / 2));
    return totalNumberOfHashtags;
}

int main()
{
    int T;
    int N = 1000;
    vector<int> vec;

    //cout<<"T , N : ";
    cin >> T;
    //cout<<endl;
    char **arr = new char *[T];
    int i = 0;
    while (i < T)
    {
        arr[i] = new char[N];
        //cout<<"2d created!"<<endl;
        i++;
    }
    int T1 = T;
    while (T--)
    {
        int j = 0;
        cin.ignore();
        cin.getline(arr[j], N);
        int temp = countHashTags(arr[j], N);
        vec.push_back(temp);
        j++;
    }
    for (int i = 0; i < vec.size(); i++)
    {

        cout << vec[i] << endl;
    }
    for (int i = 0; i < T1; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    //cout << endl;
}
