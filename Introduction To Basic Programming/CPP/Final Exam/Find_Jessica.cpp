#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, j = "Jessica";
    getline(cin, s);
    stringstream ss(s);
    string ans;
    bool jes=false;
    while(ss>>ans)
    {
        if(ans==j)
        {
            jes=true;
        }
    }
    jes==true?cout<<"YES":cout<<"NO";
    return 0;
}