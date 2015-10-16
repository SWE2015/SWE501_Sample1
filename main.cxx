#include <iostream>
using namespace std;

/**
* This code computes PI, using Gregory–Leibniz series.
*/

int main(int argc, char const *argv[])
{
    double quarterpi = 0; // One fourth of PI is stored.
    double index = 1; // The index in Gregory–Leibniz series.
    int sign = 1; // Sign stored for multiplication. -1 or 1
    cout.precision(10);

    double num_of_iterations;
    for(;;)
    {
        cout << "Please enter the number of iterations: ";
        if (cin >> num_of_iterations)
        {
            for (; num_of_iterations > 0 ; num_of_iterations--)
            {
                quarterpi += sign * 1/index;
                index += 2;
                sign *= -1;
            }
            cout << "your PI approximation is: " << quarterpi*4 << endl;
        }
        else{
            cout << "Invalid input, quitting application." << endl;
            break;
        }   
    }
    return 0;
}