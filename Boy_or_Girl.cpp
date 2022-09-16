#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    sort(s.begin(), s.end());
    // cout<<s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            continue;
        }
        else
        {
            for (int j = 1; j <= s.length(); j++)
            {
                if (s[i] != s[j])
                {
                    count++;
                    break;
                }
            }
        }
    }
    // cout<<count;

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
        cout << "IGNORE HIM!";

    return 0;
}