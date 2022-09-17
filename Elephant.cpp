#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 5)
    {
        if (x % 5 == 0)
        {
            cout << x / 5;
        }
        else
            cout << (x / 5) + 1;
    }

    else if (x >= 4)
    {
        if (x % 4 == 0)
        {
            cout << x / 4;
        }
        else
            cout << (x / 4) + 1;
    }

    else if (x >= 3)
    {

        if (x % 3 == 0)
        {
            cout << x / 3;
        }
        else
            cout << (x / 3) + 1;
    }

    else if (x >= 2)
    {

        if (x % 2 == 0)
        {
            cout << x / 2;
        }
        else
            cout << (x / 2) + 1;
    }
    else
        cout << "1";

    return 0;
}