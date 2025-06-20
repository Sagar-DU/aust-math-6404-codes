#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Take input of a quadratic equation's a b c 
    float a, b, c;
    cout <<"Input the co efficient of x^2: ";
    cin >> a;

    cout <<"Input the co efficient of x: ";
    cin >> b;

    cout <<"Input the constant: ";
    cin >> c;
    
    // Print the quadratic equation
    cout <<"Your quadratic equation is"<<endl;
    cout <<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;

    // Determine if the root is real 
    float D = b*b - 4*a*c;
    
    if (D<0)
    {
        cout <<"Sorry this quadratic equation has no real root"<<endl;
    }
    else if (D == 0)
    {
        cout <<"The equation has only one root: ";
        cout <<(-b/(2*a))<<endl;
    }
    else
    {
        cout <<"The root of the equation is x1: ";
        cout <<((-b)-sqrt(b*b - 4*a*c))/(2*a)<<endl;
        cout <<"The root of the equation is x2: ";
        cout <<((-b)+sqrt(b*b - 4*a*c))/(2*a)<<endl;
    }    
    
    

    return 0;
}