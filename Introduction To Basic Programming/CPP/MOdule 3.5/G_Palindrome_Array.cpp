#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i=0,j=n-1;
    bool ispal=true;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            ispal=false;
            break;
        }
        i++;
        j--;
    }
    if (ispal)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}