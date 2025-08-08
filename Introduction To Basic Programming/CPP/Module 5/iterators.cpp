#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    // for (int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    for(auto it =s.begin();it<s.end();it++) //string::iterator/auto
    {
        cout<<*it<<endl;
    }
    return 0;
}