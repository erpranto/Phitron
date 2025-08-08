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
};
 
int main()
{
    Student rahim(10, 1, 4.98);
    Student *karim = new Student(10, 50, 3.78);
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}