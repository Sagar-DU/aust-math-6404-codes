#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i%2 != 0)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            
        }
        cout << endl;
    }

    return 0;
}