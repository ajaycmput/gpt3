#include <iostream>

using namespace std;  //namespace is a space where we can store functions and all other things connected 
                    //to programming and we can name the space

int main() {

    int A = 4;  //here we are allocating space for the integer variable(int = 32 bits)
    //A = 4
    //& (ampersand)
    //&name of variable

    cout << A<<endl;
    cout << &A <<endl;

    A = 10;

    cout << A<<endl;
    cout << &A;
    /*
    1. variables cant have the same name.
    2. Variables cant start from number

    */
}