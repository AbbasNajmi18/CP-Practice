#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int last;
        last = n % 10;
        if (last == 0)
        {
            n = n / 10;
        }
        else
            n--;
    }
    cout << n;

    return 0;
}