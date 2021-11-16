#include <iostream>
#include <chrono>

using namespace std;
//using namespace std::chrono;
int countBits1(long long n)
{ //normal method
    int count = 0;
    while (n > 0)
    {
        count += (int)(n & 1);
        n = n >> 1;
    }
    return count;
}
int countBits2(long long n)
{
    int count = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}
int main()
{
    long long n;
    cin >> n;

    auto start2 =chrono::high_resolution_clock::now();
    int y = countBits2(n);
    auto stop2 = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<chrono::nanoseconds>(stop2-start2);

    auto start1 =chrono::high_resolution_clock::now();
    int x = countBits1(n);
    auto stop1 = chrono::high_resolution_clock::now();
    auto duration1 = chrono::duration_cast<chrono::nanoseconds>(stop1-start1);


    
     cout << "fast method: " << y << "   "<< duration2.count() << " nanoseconds"<< endl;

    cout << "slow method: " << x << "   "<< duration1.count() << " nanoseconds"<<endl;
   
}