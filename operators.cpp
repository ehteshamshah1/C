#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // ==========================
    // Arithmetic Operators
    // ==========================
    cout << "\n===== Arithmetic Operators =====\n";

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (b != 0)
    {
        cout << a << " / " << b << " = " << static_cast<float>(a) / b << endl;
        cout << a << " % " << b << " = " << a % b << endl;
    }
    else
    {
        cout << "Division: Error! Division by zero." << endl;
        cout << "Modulus : Error! Modulus by zero." << endl;
    }

    // ==========================
    // Relational Operators
    // ==========================
    cout << "\n===== Relational Operators =====\n";

    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;

    // ==========================
    // Logical Operators
    // ==========================
    cout << "\n===== Logical Operators =====\n";

    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0) : " << (a > 0 || b > 0) << endl;
    cout << "!(a > 0)         : " << !(a > 0) << endl;

    // ==========================
    // Assignment Operators
    // ==========================
    cout << "\n===== Assignment Operators =====\n";

    int x = a;

    cout << "Initial x = " << x << endl;

    x += b;
    cout << "x += b : " << x << endl;

    x = a;
    x -= b;
    cout << "x -= b : " << x << endl;

    x = a;
    x *= b;
    cout << "x *= b : " << x << endl;

    if (b != 0)
    {
        x = a;
        x /= b;
        cout << "x /= b : " << x << endl;

        x = a;
        x %= b;
        cout << "x %= b : " << x << endl;
    }

    // ==========================
    // Bitwise Operators
    // ==========================
    cout << "\n===== Bitwise Operators =====\n";

    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "~a     = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    // ==========================
    // Increment / Decrement
    // ==========================
    cout << "\n===== Increment / Decrement =====\n";

    int y = a;

    cout << "Original y = " << y << endl;
    cout << "Post Increment (y++) : " << y++ << endl;
    cout << "After y++            : " << y << endl;

    cout << "Pre Increment (++y)  : " << ++y << endl;

    cout << "Post Decrement (y--) : " << y-- << endl;
    cout << "After y--            : " << y << endl;

    cout << "Pre Decrement (--y)  : " << --y << endl;

    // ==========================
    // Ternary Operator
    // ==========================
    cout << "\n===== Ternary Operator =====\n";

    cout << "Greater Number = " << ((a > b) ? a : b) << endl;

    // ==========================
    // Operator Precedence
    // ==========================
    cout << "\n===== Operator Precedence =====\n";

    cout << "2 + 3 * 4 = " << 2 + 3 * 4 << endl;
    cout << "(2 + 3) * 4 = " << (2 + 3) * 4 << endl;
    cout << "10 - 4 / 2 = " << 10 - 4 / 2 << endl;
    cout << "(10 - 4) / 2 = " << (10 - 4) / 2 << endl;

    return 0;
}
