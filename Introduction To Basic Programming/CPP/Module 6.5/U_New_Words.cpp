#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
    }
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E')
        {
            e++;
        }
        if (s[i] == 'G')
        {
            g++;
        }
        if (s[i] == 'Y')
        {
            y++;
        }
        if (s[i] == 'P')
        {
            p++;
        }
        if (s[i] == 'T')
        {
            t++;
        }
    }

    int ans = min({e, g, y, p, t});
    cout << ans;
    return 0;
}
