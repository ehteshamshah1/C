#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    const double PI = 3.141592653589793;

    cout << "Mathematics\n" << endl;

    cout << "Absolute Value of -4 = " << abs(-4) << endl;
    cout << "Square Root of 16 = " << sqrt(16) << endl;
    cout << "Power of 4^2 = " << pow(4, 2) << endl;
    cout << "Round 4.5 = " << round(4.5) << endl;
    cout << "Floor 3.2 = " << floor(3.2) << endl;
    cout << "Ceil 7.1 = " << ceil(7.1) << endl;
    cout << "Maximum = " << max(13, 42) << endl;
    cout << "Minimum = " << min(13, 42) << endl;
    cout << "Cube Root = " << cbrt(27) << endl;

    cout << "\nTrigonometric Functions\n" << endl;

    cout << "sin(90°) = " << sin(90 * PI / 180) << endl;
    cout << "cos(0°) = " << cos(0 * PI / 180) << endl;
    cout << "tan(30°) = " << tan(30 * PI / 180) << endl;

    cout << "\nLogarithm of 10 = " << log(10) << endl;
    cout << "Exponential of 2 = " << exp(2) << endl;

    srand(time(0));

    cout << "\nRandom Number = " << rand() << endl;
    cout << "Random (0-9) = " << rand() % 10 << endl;
    cout << "Random (1-100) = " << rand() % 100 + 1 << endl;

    return 0;
}
