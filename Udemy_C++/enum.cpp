#include <iostream>

using namespace std;

enum dayOfWeek {M = 1, TU, W, TH, F, SA, SN};

string getDay(dayOfWeek);  //function prototype

int main()
{
    dayOfWeek d = M;

    int choice;
   
    /*
    cout << d << endl;

    cout << dayOfWeek(W) << endl;

    */

    cout << "Enter day of the week " << endl;
    cout << "1. Monday " << endl;
    cout << "2. Tuesday " << endl;
    cout << "3. Wednesday " << endl;
    cout << "4. Thursday " << endl;
    cout << "5. Friday " << endl;
    cout << "6. Saturday " << endl;
    cout << "7. Sunday " << endl;
    cin >> choice ;
    cout << getDay(dayOfWeek(choice)) << endl;
    return 0;
}

string getDay(dayOfWeek d)
{
    switch(d)
    {
        case M:
            return "Monday";
            break;
        case TU:
            return "Tuesday";
            break;
        case W:
            return "Wednesday";
            break;
        case TH:
            return "Thursday";
            break;
        case F:
            return "Friday";
            break;
        case SA:
            return "Saturday";
            break;
        case SN:
            return "Sunday";
            break;
        default:
            return "You typed something wrong !";
    }
}