#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // manipulators
    int x = 123;
    int y = 12;
    int z = 1;

    cout << setw(4) << x << endl;
    cout << setw(4) << y <<endl;
    cout << setw(4) << z << endl;

    //operator precedence
    cout << y*2+z << endl;
    cout << z-y+x << endl;
    return 0;
}
