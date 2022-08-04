#include <iostream>

using namespace std;


int main()
{
    int a =4560 , b = 10;


    if ( a > b) 
    {
        cout << a << " > " << b << endl;
    }
    
    else if ( a < b )
    {
        cout << a << " < " << b << endl;

    }

    else {
        cout << "that instruction will be executed ONLY if all of the conditions werent met"<< endl;
    }

    return 0;


}