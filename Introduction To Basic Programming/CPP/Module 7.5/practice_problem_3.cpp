#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string name;
    cin >> name;
    stringstream ss(s);
    string word;
    int num = 0;
    while (ss >> word)
    {
        if (word == name)
        {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}