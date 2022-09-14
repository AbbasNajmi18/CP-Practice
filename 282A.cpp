#include <iostream>
using namespace std;

int main()
{
    int a, count;
    cin >> a;
    count = 0;
    string b;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b == "++X" || b == "X++")
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count;

    return 0;
}