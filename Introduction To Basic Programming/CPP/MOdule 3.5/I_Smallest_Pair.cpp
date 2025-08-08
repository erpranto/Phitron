#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    for (int x = 0; x < m; x++)
    {
        int n = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j] + j - i;
                ans= min(sum,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}