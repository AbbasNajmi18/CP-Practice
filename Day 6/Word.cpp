#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int upper = 0;
    int lower;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {

        if (65 >= int(s[i]) || int(s[i]) <= 90)
        {
            upper++;
        }
    }
    lower = s.length() - upper;
    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s;

    return 0;
}