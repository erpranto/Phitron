#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (n % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            cout << abs(even - odd) / 2 << endl;
        }

        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}