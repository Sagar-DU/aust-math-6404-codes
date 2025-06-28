#include <iostream>

using namespace std;

int main()
{
    int year = 0;

    cout << "Give me a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year" << endl;
                return 0;
            }
            else
            {
                cout << year << " is not a leap year" << endl;
                return 0;
            }
        }
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}