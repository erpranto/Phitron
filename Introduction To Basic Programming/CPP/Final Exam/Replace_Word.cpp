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
        while (true)
        {
            int indx = s.find(x), l = x.length();
            if (indx != -1)
            {
                s.erase(indx, l);
                s.insert(indx, "#");
            }
            else
            {
                break;
            }
        }

        cout << s << endl;
    }
    return 0;
}