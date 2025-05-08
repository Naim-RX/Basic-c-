#include <iostream>

using namespace std;

int main()
{
    float x = 455;
    float & y = x;

    cout << y << endl;

    //typecasting
    int a = 45;
    int b = 6;
    cout << (double) a/b << endl; 
    
    int d = 12.5;
    int c = int (d);
    cout << c << endl;
    const int z = 45; //it cannot be changed
    return 0;
}
