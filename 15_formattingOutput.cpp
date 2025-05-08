#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 2;

    cout << showpoint;
    cout << setw(11)<< (float)num1 / num2 << endl;
    cout << setprecision(10);
    cout << (float)num1 / num2 << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << setw(11) << (float)num1 / num2 << endl;

    return 0;
}
