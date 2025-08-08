#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int; // New key word accesing heeep memory
    *x = 10;          //// Pointer and dynamic Variable
    p = x;
    cout << "Fun -> " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main Fun -> " << *p << endl;
    return 0;
}