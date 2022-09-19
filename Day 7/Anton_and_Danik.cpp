#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    int count = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            count++;
        else
            count--;
    }
    if (count > 0)
    {
        cout << "Anton";
    }
    else if (count==0)
    {
        cout << "Friendship";
    }
    else
        cout << "Danik";

    return 0;
}
