#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Square = " << pow(num, 2) << endl;
    cout << "Cube = " << pow(num, 3) << endl;

    return 0;
}
