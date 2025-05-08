#include <iostream>

using namespace std;

// Structure
typedef struct student{
    // Data 
    int id;
    int roll;
}stu;

union number {
    int num;
    float fl;
};

int main()
{
    //struct student naim;
    stu naim;
    naim.id = 1011;
    naim.roll = 2;
    cout << naim.id << endl;
    cout << naim.roll << endl;

    union number n1;
    n1.num = 10;
    cout << n1.num << endl;

    enum meal {breakfast,lunch,dinner};
    meal m1 = breakfast;
    cout << m1 << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}
