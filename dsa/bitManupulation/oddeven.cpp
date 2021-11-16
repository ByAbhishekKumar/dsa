#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int y = 1;
    while (y)
    {   cout<<"Enter number :";
        cin >> x;
        
        if ((x & 1) == (0))
        {
            cout << " Even " << x << endl;
        }
        else
        {
            cout << " Odd " << x << endl;
        }
        cout << "Enter 1 to continue else 0 to quit: ";
        cin >> y;
        if(y>1 or y < 0){
            cout<<"Wrong Input"<<endl;
            cin>>y;
        }
        cout << endl;
    }
}
