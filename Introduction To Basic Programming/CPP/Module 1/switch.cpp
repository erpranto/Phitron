#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1: // if(day==1)
        cout << "Saturday" << endl;
        break;
    case 2: // if(day==2)
        cout << "Sunday" << endl;
        break;
    case 3: // if(day==3)
        cout << "Monday" << endl;
        break;
    case 4:
        cout << "Tuesday" << endl;
        break;
    case 5:
        cout << "Wednesday" << endl;
        break;
    case 6:
        cout << "Thrusday" << endl;
        break;
    case 7:
        cout << "Friday" << endl;
        break;
    default:
        cout << "Wrong Input" << endl;
    }
    return 0;
}