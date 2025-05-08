#include <iostream>
using namespace std;

int main()
{
    int marks[2] = {21, 34};

    cout << marks[0] << endl;
    marks[1] = 56;
    cout << marks[1] << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << marks[i] << endl;
    }
    // pointers and arrays
    int *p = marks;
    cout << "address of arr:" << &marks << endl;
    cout << "Memory address of arr: " << p << endl;
    cout << "The value of marks[0] is: " << *p << endl;
    cout << "The value of marks[1] is: " << *(p + 1) << endl;

    // 2D array
    int numbers[2][2] = {
            {20, 30},
            {10, 40}
        };
        cout << numbers[0][0] << endl;
        for (int row = 0; row < 2; row++)
        {
            for (int col = 0; col < 2; col++)
            {
                cout << numbers[row][col] << " " ;
            }
            cout << endl;
        }


    // sum of integers number
    int n,i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    } 
    int sum =0;
    for(int i = 0;i< n ;++i){
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}
