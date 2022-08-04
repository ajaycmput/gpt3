#include <iostream>

using namespace std;

int main ()
{
    int a  = 10;
    int b  = 4;

    cout << a + b << endl;  // addition operation
    cout << a - b << endl;  // subtraction operation
    cout << a * b << endl;  // multiplication operation
    cout << a / b << endl;  // division operation
    cout << a % b << endl;  // modulus division


    int c = 456;

    c += 1;

    cout << c << endl;

    // PREINCREMENTATION: ++d
    // POSTINCREMENTATION: d++
    // They are different
    // POSTDECREMENTATION: d--
    // PREDECREMENTATION: --d

    return 0;
}