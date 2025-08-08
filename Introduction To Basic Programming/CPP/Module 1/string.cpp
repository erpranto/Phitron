#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore();     //Built in Func. To ignore an enter
    char s[101];

    // cin >> s; **Without Space**
    //fgets(s,101,stdin) ---- in C

    cin.getline(s,101); // To input string with Space

    cout << x<<endl<<s;
    return 0;
}