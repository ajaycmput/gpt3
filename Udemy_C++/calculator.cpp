#include <iostream>

using namespace std;

int main()
{
    double var1, var2;

    begin:  // program flow

    system("cls");

    cout << "Enter first number: ";
    cin >> var1;

    cout << "Enter second number: ";
    cin >> var2;

    cout << "What do you want to do with the numbers ?";
    cout << " +  - add" << endl;
    cout << " -  - subtract" << endl;
    cout << " x  - multiply" << endl;
    cout << " /  - divide" << endl;


    char decision;

    cin >> decision;

    system("cls"); // everything before this gets cleared in the terminal
    switch(decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;

        case 'x':
            cout << var1 << " x " << var2 << " = " << (var1 * var2) << endl;
            break;
        
        case '/':
            if (var2) // condition is always true apart from when its = 0, Thus, same as var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "You can't divide by 0" << endl;
            break;

        default:
            cout << "You typed the wrong character" << endl;
    }

    char decision2;

    cout << "Do you want to continue that program? (Y/N)";
    cin >> decision2;

    decision2 =  tolower(decision2);  //convert string to lowercase
    if (decision2 == 'y')
        // control of the program to move to begin ( program flow control )
        goto begin;

    return 0;
}