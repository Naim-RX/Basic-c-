#include <iostream>

using namespace std;

// This is function prototype
int sum(int a , int b);// formal parameters

//maximum value
int max(int c , int d){
    if (c > d)
    {
        return c;
    }
    else {
        return d;
    }
    
}

// Pass by value
void fun(int x){
    x = 30;
}
//passing string
void printString(string str) {
    cout <<"passing string :" << str << endl;
    }

//this will not swap a and b
// void swap(int a , int b){
//     int temp = a; // temp = 10 a = 10 b = 20
//     a = b;        // temp = 10 a = 20 b= 20
//     b = temp;     // temp = 10 a = 20 b = 10
// }

//call by referance
// void swap(int* a , int* b){
//     int temp = *a; // temp = 10 a = 10 b = 20
//     *a = *b;        // temp = 10 a = 20 b= 20
//     *b = temp;     // temp = 10 a = 20 b = 10
// }

// call by referance using c++ referance variables 
void swapRef(int &a , int &b){
    int temp = a; // temp = 10 a = 10 b = 20
    a = b;        // temp = 10 a = 20 b= 20
    b = temp;     // temp = 10 a = 20 b = 10
}

// int & swapRef(int &a , int &b){
//     int temp = a; // temp = 10 a = 10 b = 20
//     a = b;        // temp = 10 a = 20 b= 20
//     b = temp;     // temp = 10 a = 20 b = 10
//     return a;
// }

// inline function
inline int password(int a, int b){
    return a*b;
}

// default argument
float money(int current ,float interest =1.09 ){
    return current * interest;
}

void display (int a=10 , int b = 20){
    cout << a << " " << b << endl;
}

// Define a callback function type
    typedef void (*CallbackFunction)();

    void performAction(CallbackFunction callback) {
    cout << "Performing some action...\n";
    callback();
}
void myCallback() {
    cout << "Callback function \n";
}

// function overloading
void overload(int m , int n){
    int add = m+n;
    cout << add << endl;
}

void overload(int m , int n ,int o){
    int add = m+n+o;
    cout << add << endl;
}

// passing arrays to function
// arrays always pass by referance
void displayArr(int num[],int size){
    for (int i = 0; i < 5; i++)
    {
        cout << num[i]<< " ";
    }
    cout << endl;
}

int main()
{
    int a=10 , b = 20;// Actual parameters
    cout << "sum is:"<< sum(a,b) << endl;

    int c = 5 , d = 4;
    //int m = max(c, d);
    cout << "Maximum number: " << max(c,d) << endl;

    int x = 20;
    fun(x);
    cout << "pass by value :" << x << endl;

    string myString = "Hello, GFG!";
    printString(myString);

    // swap(&a,&b);
    // cout << "a is:"<< a << endl << "b is:" << b << endl;

    swapRef(a,b);
    cout << "a is:"<< a << endl << "b is:" << b << endl;

    performAction(myCallback);

    cout << password(5,2)<< endl;

    cout << "Default argument:" << money(10000) << endl;


    display();
    int number[5] = {10,20,30,40,50};
    displayArr(number , 5);


    return 0;
}

// function prototype
int sum(int a , int b)
{
    int c = a + b;
    return c;
}