#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        for (int i = 0; i <= s.size() - x.size();)
        {
            bool sm = true;
            for (int j = 0; j < x.size(); j++)
            {
                if (s[i + j] != x[j])
                {
                    sm = false;
                    break;
                }
            }
            if (sm == true)
            {
                s.replace(i, x.size(), "#");
                i ++;
            }
            else
            {
                i++;
            }
        }
        cout << s << endl;
    }
    return 0;
}