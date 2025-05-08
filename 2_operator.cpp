#include <iostream>

using namespace std;

int main()
{
    // Arithmatic operators: +,-,*,/,%,x++(prefix increment),x--,++x(postfix increment),--x
    int a = 1, b = 2;
    cout << a + b;

    // assignment operators -> used to assign valus to variable
    // -> = , += , -= , *= , /= , %=

    // comparison/relational operators: ==, != , < , >, <= , >=
    cout << (a == b) << endl;

    // logical operators: || , && ,!
    int l = 10;
    if (l == 10 && l > 1)
    {
        cout << "success" << endl;
    }

    /*unary operator
    + -> unary plus
    - -> unar minus
    ++ -> Increament
    -- -> decrement
    */
    int unaryM = 5;
    int result = -unaryM;
    cout << result << endl;

    // bitwise operator -> &(And) , |(Or) , ^(xor) , >> , << , ~
    int x = 2;
    int y = 3;
    int z;

    z = x & y;
    cout << z << endl;

    z = x | y;
    cout << z << endl;

    int m = 32;
    int n = m >> 2;
    cout << n << endl;

    // special operator -> ( , ) , * , sizeof()

    float fl = 34.4f;
    cout << "size of fl is:" << sizeof(fl) << endl;

    // conditional/ ternery  -> ? , :
    int num1 = 20, num2 = 30;
    int max = (num1 > num2) ? num1 : num2;
    cout << "Large number is: " << max << endl;

    return 0;
}
