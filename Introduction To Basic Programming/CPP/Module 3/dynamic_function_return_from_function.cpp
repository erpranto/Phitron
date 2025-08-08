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
        this->roll = roll; // or // (*this).roll=roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student* karim=new Student(10, 8, 4.50);

    return karim;
}
int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}