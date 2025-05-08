#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student.txt", ios::out | ios::app);
    // file << "I am Naim.";
    cout << "Enter your name:";
    getline(cin, name);
    file << name << "\t";

    cout << "Enter your age:";
    cin>> age;
    file << age << endl;
    cin.ignore();

    string line;
    ifstream file1("student.txt");
    while (getline(file1,line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}
