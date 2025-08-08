#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : r.marks < l.marks;
    // // if(l.marks==r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else
    // {
    //     return l.marks > r.roll;
    // }
}
int main()
{
    int t;
    cin >> t;
    Student s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }
    sort(s, s + t, cmp);
    for (int i = 0; i < t; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    return 0;
}