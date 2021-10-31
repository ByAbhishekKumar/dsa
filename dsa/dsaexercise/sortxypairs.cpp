#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return a.second<b.second;}
vector<pair<int, int>> sortxypairs(vector<pair<int, int>> points)
{
   sort(points.begin(), points.end(),compare);
    for (int i = 1; i < points.size(); i++)
    {
        int curr = points[i].first;
        pair<int, int> x = points[i];
        int j = i - 1;
        while (curr < points[j].first and j >= 0)
            {
                
                points[j + 1] = points[j];
                

                j--;
            }
        
        points[j + 1] = x;
        
    }
    
    return points;
}

int main()
{
    vector<pair<int, int>> points = {{1, 2}, {3, 2}, {4, 8}, {11, 5}, {-1, 2}, {8, 3}, {4, 6},{4,-1}};
    vector<pair<int, int>> points1 = sortxypairs(points);
    for (int i = 0; i < points1.size(); i++)
    {
        cout << points1[i].first << " " << points1[i].second << endl;
    }
}