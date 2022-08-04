#include <iostream>


// overloading functions simply refers to functions with the same
//  name but woth different TYPES ( eg int, bool or void etc)


using namespace std;

int power(int, int);
double power(double b, int e);

int main()
{

    cout << power(8.7,3) << endl;
    return 0;
}


int power(int b, int e)
{
    int tmp = b;
    while( e > 1)
    {
        b *= tmp;   // b = b * tmp;
        e--;
    }

    return b;
}

double power(double b, int e)
{
    int tmp = b;
    while( e > 1)
    {
        b *= tmp;   // b = b * tmp;
        e--;
    }

    return b;
}