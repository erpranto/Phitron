#include<iostream>
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    cin >>x>>c>>d;
    cout<<x<<endl<<c<<endl<<d<<endl;
    cout<<(int)c<<endl; //  this is called typecast
    cout<<(char)x<<endl;
    return 0;
}