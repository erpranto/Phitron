#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 48 && c <= 58)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA"<<endl;
        if (c >= 65 && c <= 92)
        {
            cout << "IS CAPITAL"<<endl;
        }
        else if(c>=97&&c<=124)
        {
            cout<<"IS SMALL"<<endl;
        }
    }

    return 0;
}