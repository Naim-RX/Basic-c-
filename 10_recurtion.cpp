#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 1)
    {
        return 1;
    }
    
    return n * factorial(n-1);
}

int fib(int n){
    if ( n < 2)
    {
        return 1;
    }
    
    return fib (n-2) + fib (n-1);
}
int main()
{
    cout<< "factorial is:" << factorial(3) << endl;
    cout << "fibonacci seuence at this position: " << fib(0);
    return 0;
}
