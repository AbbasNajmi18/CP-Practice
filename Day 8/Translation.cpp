#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s, t;
    cin >> s >> t;
    string temp = s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = temp[s.length() - (i + 1)];
    }
    if (s == t)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
