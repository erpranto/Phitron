#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        string st;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                st += s[i];
            }
        }
        sort(st.begin(), st.end());
        cout << st << endl;
    }
    return 0;
}