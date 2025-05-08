#include <iostream>

using namespace std;

int main()
{
    // selection control structure
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18 && age > 0)
    {
        cout << "You are not allowed" << endl;
    }
    else if (age > 17)
    {
        cout << "You are allowed" << endl;
    }
    else if (age < 1)
    {
        cout << "     You are not yet born!" << endl;
    }

    // nested if
    if (age > 17)
    {
        if (age == 18)
        {
            cout << "You are just 18" << endl;
        }
        cout << "congratulations!" << endl;
    }

    // selection control structure: switch
    switch (age)
    {
    case 18:
        cout << "You are allowed with special pass";
        break;
    case 0:
        cout << "You are newborn";
        break;
    default:
        cout << "Thanks!";
        break;
    }
    return 0;
}
