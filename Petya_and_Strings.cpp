#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for (int i = 0; i < s1.length(); i++)
    {
        if (int(s1[i]) > int(s2[i]))
        {
            ans = 1;
            break;
        }
        if (int(s1[i]) < int(s2[i]))
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}