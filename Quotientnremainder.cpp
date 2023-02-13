

// Quotient and remainder

#include <iostream>
using namespace std;

int main () {
    int dividend, divisor, quotient, remainder;

    cout << "Please enter dividend: " << endl;
    cin >> dividend;
    cout << "Please enter divisor: " << endl;
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient is: " << quotient << endl;
    cout << "Remainder is: " << remainder;
    
    return 0;
}