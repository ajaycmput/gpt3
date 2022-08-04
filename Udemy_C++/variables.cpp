#include <iostream>

using namespace std;

int main () {
    

    int a = 40, b, c = 60;

    cout  << "a:  " << a << "  " << "address:  " << &a << endl;
    cout  << "b:  "<< b << "  " << "address:  " << &a << endl;
    cout  << "c:  " << c << "  " << "address:  " << &a << endl;


    short t1 = 5;  //-32768 to 32767
    
    cout << t1 << endl;


    float t2 = 5.12;  // float allocates 4 bytes of memory, you can assign numbers up to 38 zeroes
    double t3 = 5.12;  // double allocates 8 bytes of memory, you can assign numbers up to 308 zeroes

    cout << t2 << endl;
    cout << t3 << endl;

    char t4;  // character

    t4 = 'a';

    cout << t4 << endl;

    string t5 = "Hello World! :-)";  // string 

    cout << t5 << endl;

    // combining strings
    string x = "part1";
    string y = "part2";
    string combineStrings = x + " " + y;

    cout << combineStrings << endl;


    // boolean: true or false, so FALSE IS ALWAYS 0, EVERY OTHER NUMBER IS TRUE, 1 is representing true.
    bool t6 = true;
    cout << t6 << endl;

    // for unsigned short int, 0 to 65535 (if its more, then its overflow)

    unsigned short int t7 = 3700 ;
    cout << t7 << endl;


    // BEST PRACTICES: Use uppercase letters for constant variables

    const string NAMEOFGAME = "Conqueror of C++";

    cout << NAMEOFGAME << endl;
    return 0;
}
