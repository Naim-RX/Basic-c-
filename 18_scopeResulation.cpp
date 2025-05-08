#include <iostream>
using namespace std;

int x = 10;

int main()
{
    int x = 50;
    // :: x = 20;  // it change the value of global variable
    cout << :: x;
    return 0;
}
