#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student ss[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ss[i].nm >> ss[i].cls >> ss[i].s >> ss[i].id;
    }
    for (int i = 0; i < n / 2; i++)
    {
        char temp = ss[i].s;
        ss[i].s = ss[n - 1 - i].s;
        ss[n - 1 - i].s = temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ss[i].nm<<" "<<ss[i].cls<<" "<<ss[i].s<<" "<<ss[i].id<<endl;
    }
    return 0;
}