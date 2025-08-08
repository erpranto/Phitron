#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersy;

    Cricketer(string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 30);
    Cricketer *sakib = new Cricketer("Bangladesh", 75);
    *sakib = *dhoni;
    // sakib->country=dhoni->country;
    // sakib->jersy=dhoni->jersy;
    delete dhoni;
    cout << sakib->country << " " << sakib->jersy;
    return 0;
}