#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int count = 0;
    cin >> n;

    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;

        if (temp == 7 || temp == 4)
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
