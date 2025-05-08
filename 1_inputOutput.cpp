#include <iostream> // include inpute output functions
#include <conio.h>
/*There are two types of header files
1.system header file: it comes with the compiler
2.user define header file: it is written by the programmer
ex : #include "this.h" -> this will produce an error if this.h is not present in the current directory*/
using namespace std;

// this is a comment

//global variable
int num = 20;
// function
void number(){
    cout << num << endl;
}

int main()
{
    // local variable
    int num = 10;
    num = 21;
    string name = "Naim";
    number();
    int num1;
    cout << "Enter your number: ";
    // >> this is extraction operator
    cin >> num1;
    // << this is insertion operator
    cout << num << endl ;
    cout << num1;
    cout << ::num;

    getch();
}
