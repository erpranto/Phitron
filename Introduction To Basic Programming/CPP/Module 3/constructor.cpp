#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double gpa;
    Student(int c, int r, int g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
    // this is constructer // there will be no return type here
    // Declare as same name as class
};
int main()
{
    Student rahim(10, 1, 4.98);
    Student karim(10, 50, 3.78);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim.cls << " " << karim.roll << " " << karim.gpa << endl;
    return 0;
}