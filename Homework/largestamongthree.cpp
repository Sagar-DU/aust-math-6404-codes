#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    float largest = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> b;
    cout << endl;

    cout << "Enter the third number: ";
    cin >> c;
    cout << endl;

    if (a > b && a > c)
    {
        cout << a << " is the largest among three number." << endl;
    }
    else if (b > a && b > c)
    {

        cout << b << " is the largest among three number." << endl;
    }
    else
    {
        cout << c << " is the largest among three number." << endl;
    }

    return 0;
}