#include <iostream>
using namespace std;

int main()
{
    float F, C;
    char choice;

    cout << "Enter choice:\n";
    cout << "C for Celsius to Fahrenheit\n";
    cout << "F for Fahrenheit to Celsius\n";
    cin >> choice;

    switch (choice)
    {
        case 'C':
        case 'c':
            cout << "Enter temperature in Celsius: ";
            cin >> C;

            F = C * 1.8 + 32;

            cout << "Fahrenheit = " << F << endl;
            break;

        case 'F':
        case 'f':
            cout << "Enter temperature in Fahrenheit: ";
            cin >> F;

            C = (F - 32) * 5.0 / 9.0;

            cout << "Celsius = " << C << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
