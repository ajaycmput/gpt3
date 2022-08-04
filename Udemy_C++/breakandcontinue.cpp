#include <iostream>

using namespace std;

main()
{
    for (int i = 1; i<= 10; i++)  // amount of rows; length of column
    {
        if ( i == 5)
            continue;  //EVERYTHING AFTER continue WON'T be executed. BUT LOOP WON'T END
        /*
        if (i == 5)
            break;  //EVERYTHING after break WON'T be executed AND we are LEAVING the ACTUAL LOOP
        */
        for (int j = 1; j  <= 10; j++)  // amount of columns, length of row
        {
            cout.width(4);
            cout << i * j;

        }
        cout << endl;
    }
    
}