#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll; //or 
        (*this).roll=roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(20, 5, 5.00);
    Student karim(10, 8, 4.50);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}