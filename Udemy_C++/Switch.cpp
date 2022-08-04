#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    switch(x)
    {
        case 0:
            cout << "This is the place that will be executed when switched value is equal to 0" << endl;
            break;
        case 25:
            cout << "This is the place that will be executed when switched value is equal to 25" << endl;
            break;
        case 50:
            cout << "This is the place that will be executed when switched value is equal to 50" << endl;
            break;
        default:
            cout << "This is the place that will be executed when value of switched value is not equal to any case" << endl;

    }



    return 0;
}