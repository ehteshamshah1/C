#include <iostream>
using namespace std;

int main()
{
    int a, b;

    a = 10;
    b = 20;

    cout << "Before Swapping\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter Swapping\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    return 0;
}
