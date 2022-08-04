#include <iostream>

using namespace std;

// TO COMPILE: g++ .\downloading_data_from_input
//                  .\downloading_data_from_input.exe
int main ()
{
    string name, surname;

    cout << "Enter your name: ";
    cin >>  name;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Welcome " << name << " " << surname;
    
}