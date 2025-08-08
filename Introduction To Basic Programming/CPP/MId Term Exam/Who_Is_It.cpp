#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    char sec;
    int num;
};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.sec>>a.num;
        cin>>b.id>>b.name>>b.sec>>b.num;
        cin>>c.id>>c.name>>c.sec>>c.num;

        Student high=a;

        if(b.num>high.num)
        {
            high=b;
        }
        else if(b.num==high.num&&b.id<high.id)
        {
            high=b;
        }
        if(c.num>high.num)
        {
            high =c;
        }
        else if(c.num==high.num&&c.id<high.id)
        {
            high=c;
        }
        cout<<high.id<<" "<<high.name<<" "<<high.sec<<" "<<high.num<<endl;
    }
    
    return 0;
}