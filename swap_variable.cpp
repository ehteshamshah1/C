#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    a = 10;
    b = 20;

    cout << "Before Swapping\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Swapping\n";
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    return 0;
}
