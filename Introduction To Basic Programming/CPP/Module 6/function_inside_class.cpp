#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int math;
    int eng;
    Student(string name, int roll,int math,int eng)
    {
        this->name = name;
        this->roll = roll;
        this->math=math;
        this->eng=eng;
    }
    void total()
    {
        cout << "Total marks of " << name <<" = "<<math+eng<< endl;
    }
}; 
int main()
{
    Student sakib("Sakib Ahmed", 23,85,95);
    Student rakib("Rakib Ahmed", 25,95,87);
    sakib.total();
    rakib.total();
    return 0;
}