//Use of setfill()
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "1990" << setfill('.') << setw(10) << 135 << endl
         << "1991" << setfill('.') << setw(10) << 7290 << endl
         << "1992" << setfill('.') << setw(10) << 11300 << endl
         << "1993" << setfill('.') << setw(10) << 16200 << endl;
    return 0;
}
