#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 2; j < s.length(); j++)
        {
            if (s[i] > s[j])
            {

                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            j++;
        }
    }
    cout << s;

    return 0;
}