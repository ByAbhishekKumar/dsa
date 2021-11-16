#include <iostream>
using namespace std;
int getIthBit(int n, int i)
{
    int mask;
    mask = (1 << i);
    // int isOne = n&mask;;
    // if(isOne) return 1;
    // else return 0;
    return (n & mask) > 0 ? 1 : 0;
}
void setIthBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}
void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}
void clearLastIBits(int &n, int i)
{
    int mask = -1 << i;
    n = (n & mask);
}
void clearBitsInRange(int &n, int i,int j){
        int a = (~0)<<j+1;                    // as in '0' bit shifting pehele se 0 ni hai, sara 1 hai  so first position is 0th position jahan shift hoga
        int b = (   (1<< (i))  -1);           // aur jehan '1' bit pehele se hai 0th position me,to first position p jo shift hoga wo uske baad wala hoga. 
        int mask = (a|b);
        n = n&mask;

} 

int main()
{
    int n;
    int i = 0,j=0;
    cout << "Enter number: ";
    cin >> n;
    int y = 1;
    int cases;
    cout << "Enter case number 1 for getbit, 2 for setbit, 3 for clearbit,4 to clear last i bits,5 for range bit: ";
    cin >> cases;
    cout << endl;
    switch (cases)
    {
    case 1:
        while (y)
        {
            cout << "Which bit of " << n << " you want to display: ";
            cin >> i;
            int x = getIthBit(n, i);
            cout << i << "th bit of " << n << " is : " << x << endl;
            cout << "Enter 1 to continue or 0 to exit: ";
            cin >> y;
            if (y < 0 or y > 1)
            {
                cout << "Wrong input! Enter 1 to continue or 0 to exit: ";
                cin >> y;
                cout << endl;
            }
        }
        break;
    case 2:
        while (y)
        {
            cout << "Which bit of " << n << " you want to set: ";
            cin >> i;
            setIthBit(n, i);
            cout << i << "th bit of n is  set, modified number is: " << n << endl;
            cout << "Enter 1 to continue or 0 to exit: ";
            cin >> y;
            if (y < 0 or y > 1)
            {
                cout << "Wrong input! Enter 1 to continue or 0 to exit: ";
                cin >> y;
                cout << endl;
            }
        }
        break;
    case 3:
        while (y)
        {
            cout << "Which bit of " << n << " you want to clear: ";
            cin >> i;
            clearIthBit(n, i);
            cout << i << "th bit of n is  set, modified number is: " << n << endl;
            cout << "Enter 1 to continue or 0 to exit: ";
            cin >> y;
            if (y < 0 or y > 1)
            {
                cout << "Wrong input! Enter 1 to continue or 0 to exit: ";
                cin >> y;
                cout << endl;
            }
        }
        break;
    case 4:
        while (y)
        {
            cout << "how many bits  from LSB of " << n << " you want to clear(counting starts with 0 from lsb): ";
            cin >> i;
            clearLastIBits(n, i);
            cout << i << "th bit of n is  set, modified number is: " << n << endl;
            cout << "Enter 1 to continue or 0 to exit: ";
            cin >> y;
            if (y < 0 or y > 1)
            {
                cout << "Wrong input! Enter 1 to continue or 0 to exit: ";
                cin >> y;
                cout << endl;
            }
        }

        break;
        case 5:
        while (y)
        {
            cout << "Range bit of " << n << " you want to clear: ";
            cin >> i>>j;
            clearBitsInRange(n, i,j);
            cout << i << "th bit of n is  cleared, modified number is: " << n << endl;
            cout << "Enter 1 to continue or 0 to exit: ";
            cin >> y;
            if (y < 0 or y > 1)
            {
                cout << "Wrong input! Enter 1 to continue or 0 to exit: ";
                cin >> y;
                cout << endl;
            }
        }
        break;
    }
}
