#include <iostream>
using namespace std;

template <class mytemplate, class mytemplate2>
mytemplate add(mytemplate a, mytemplate2 b)
{
    return a * b;
}
int main()
{
    cout << add(10, 10.2) << endl;
    return 0;
}
