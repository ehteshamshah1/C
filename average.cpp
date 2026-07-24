#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter how many numbers: ";
    cin >> n;

    int num;
    int sum = 0;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum += num;
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
