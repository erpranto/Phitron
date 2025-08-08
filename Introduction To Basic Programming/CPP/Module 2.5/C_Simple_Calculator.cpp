#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    long long int sum=x+y,mul=x*y,min=x-y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<x<<" - "<<y<<" = "<<min<<endl;
    return 0;
}