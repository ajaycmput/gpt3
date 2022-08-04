#include <iostream>

using namespace std;

void welcome();  //declaration of function prototype
bool isNumber(string tmp);

void changeValueTo10(int x)
{
    x = 10;
}
main()
{
    /*
    welcome();

    string tmp;
    cout << "Enter the number: " << endl;
    cin >> tmp;

    if (isNumber(tmp))
        cout << "Number was entered properly" << endl;
    else
        cout << "Number wasn't entered properly" << endl;

    */
    int a = 5;
    changeValueTo10(a);

    cout << a << endl;
}

/*
void welcome()
{
    cout << "Hello, welcome to my program!! :-)"  << endl;
}

bool isNumber(string tmp)
{
    if (tmp[0] == '0')
        return false;
    
    for (int i = 0; i < tmp.length(); i++)
    {
        if(!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;
    }

    return true;
}

*/