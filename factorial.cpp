#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Enter your number: ";
    cin >> n;

    int factorial = 1;

    if (n < 0)
    {
        cout <<"Please enter a positive interger!"<<endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            factorial = factorial * (i+1);
        }
        
        cout <<"The factorial of the number is: "<<n<<"!"<<" = "<<factorial<<endl;
    }
    
    return 0;
}