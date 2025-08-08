#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char x,e;
    cin >> a >> x >> b>>e >> c;
    if (x == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a+b;
        }
    }
    else if (x == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a-b;
        }
    }
    else if(x=='*')
    {
        
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a*b;
        }
    }
    return 0;
}