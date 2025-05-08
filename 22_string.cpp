#include <iostream>
#include <cstring> // for library function
using namespace std;

int main()
{
    char message[6] = {'h', 'e', 'l', 'l', 'o'};
    cout << message << endl;

    // string library function

    char name[] = " naim";
    char name2[10];
    char name3[] = "asraful";

    int len = strlen(name);
    cout << "Length of string:" << len << endl;
    //int len = name.size();

    strcpy(name2, name);
    cout << "copy of name:" << name2 << endl;

    strcat(name3, name);
    cout <<"strcat: " <<name3 << endl;

    strupr(name);
    cout << "uppercase:" << name << endl;

    int value = strcmp(name, name3);
    if (value = 0)
    {
        cout << "strings are equal";
    }
    else
    {
        cout << "strings are not equal" << endl;
    }

    // string class
    string str1 = "Asraful ";
    string str2 = "Naim";
    string str3;

    str3 = str1;
    cout << "str3:" << str3 << endl;

    str3 = str1 + str2;
    cout << str3 << endl;

    string sameChar(5, 'A');
    cout << sameChar << endl;

    // take string input
    string s;
    cout << "enter an string:";
    getline(cin, s);
    cout << s << endl;

    string s2 = "Geeksforgeeks";

    // pointer variable declared to store the starting
    // address of the string
    char *p = &s2[0];

    // this loop will execute and print the character till
    // the character value is null this loop will execute and
    // print the characters

    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;


    // swaping first letter
    string st = "Naim";
    string st2 = "asraful";

    swap(st[0],st2[0]);
    cout << "swap:" << "st-" << st << " st2-" << st2 << endl;


    return 0;
}
