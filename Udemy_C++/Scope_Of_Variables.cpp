#include <iostream>

using namespace std;

/* scope / range of variables */


// local variables can only be accessed between curly brackets
int globalVariable;

main()
{
    /*
    int localVariable;

    cout << "Value of global Variable: " << globalVariable << endl;
    cout << "Value of local Variable: " << localVariable << endl;

    */

    int nr,result = 0;

    for (int i = 0; i < 3; i++)  // 3,2,3 - will the result be 8? NO , unless you assign int result = 0, 
                                //because local variables are stored with any number when initialized
    {
        cout << "Enter " << (i + 1) << "  number" << endl;
        cin >> nr;
        result += nr;  //result = result + nr;
    }

    cout << result << endl;
}