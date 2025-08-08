#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total()
    {
        return math_marks + eng_marks;
    }
};

bool cmp(Student a, Student b)
{
    return(a.total()==b.total())?a.id<b.id:a.total()>b.total();
}

int main()
{
    int n;
    cin >> n;
    Student ss[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ss[i].nm >> ss[i].cls >> ss[i].s >> ss[i].id >> ss[i].math_marks >> ss[i].eng_marks;
    }
    sort(ss,ss+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<ss[i].nm<<" "<<ss[i].cls<<" "<<ss[i].s<<" "<<ss[i].id<<" "<<ss[i].math_marks<<" "<<ss[i].eng_marks<<endl;
    }
    return 0;
}