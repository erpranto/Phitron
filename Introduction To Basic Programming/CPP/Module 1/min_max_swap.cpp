#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout<<"MaX="<<max(a,b)<<endl;
    cout<<"MaX in 1-10="<<max({1,2,3,4,5,6,7,8,9,10})<<endl;
    cout<<"MiN="<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Swaped Value "<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}