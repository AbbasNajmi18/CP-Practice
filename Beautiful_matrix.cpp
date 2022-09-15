#include <iostream>
using namespace std;

int main()
{
    int value;
    int temp1, temp2;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> value;
            if (value == 1)
            {
                temp1 = i;
                temp2 = j;
            }
        }
    }

    if (temp1 <= 3)
    {
        temp1 = 3 - temp1;
    }
    else
        temp1 = temp1 - 3;

    if (temp2 <= 3)
    {
        temp2 = 3 - temp2;
    }
    else
        temp2 = temp2 - 3;

    cout << temp1 + temp2;

    return 0;
}