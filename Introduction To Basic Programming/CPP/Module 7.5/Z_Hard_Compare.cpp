#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ls = b*log(a), rs = d*log(c);
    if (ls > rs)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}