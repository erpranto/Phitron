#include <bits/stdc++.h>
using namespace std;
class Student // this is user defined variable
{
public:
    char name[101];
    int roll;
    double gpa;
};
int main()
{
    Student a, b; /// this is object
    cin.getline(a.name, 101);
    cin >> a.roll >> a.gpa;
    cin.ignore(); // OR // getchar();
    cin.getline(b.name, 101);
    cin >> b.roll >> b.gpa;
    cout << "Name " << a.name << endl
         << " Roll: " << a.roll << " GPA: " << a.gpa << endl;
    cout << "Name " << b.name << endl
         << " Roll: " << b.roll << " GPA: " << b.gpa << endl;
    return 0;
}