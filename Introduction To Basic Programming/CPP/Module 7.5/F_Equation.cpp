//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <bits/stdc++.h>
using namespace std;
long long int fun(int x, int n)
{
    long long int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}
int main()
{
    int x, n;
    cin >> x >> n;
    long long int s = 0;
    for (int i = 0; i <= n; i += 2)
    {
        if (i == 0)
        {
            s += fun(x, i) - 1;
        }
        else
        {
            s += fun(x, i);
        }
    }
    cout<<s;
    return 0;
}