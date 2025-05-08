#include <iostream>
using namespace std;


int add(int a , int b){
    return a+b;
}

int add(int a , int b , int c){
    return a+b+c;
}

//function overriding
class person{
    public: 
    void display(){
        cout << "I am a person" << endl;
    }
};
class student:public person{
    public: 
    void display(){
        cout << "I am a student" << endl;
    }
};
int main()
{
    cout << add(3,6) << endl;
    cout << add(3,6,9) << endl;

    student s;
    s.display();
    return 0;
}
