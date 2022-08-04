#include <iostream>

using namespace std;


//ARRAYS

main()
{

    /* Array: An array is a series of elements of the same type, they are placed in
              memory that way that there are no other things stored between array's values

    */    

    int array[4];  // TYPE NAME[SIZE_NR_OF_ELEMENTS]

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;

    cout << "array [0] = " << array[0]  << ", address: " << &array[0] << endl;
    cout << "array [1] = " << array[1]  << ", address: " << &array[1] << endl;
    cout << "array [2] = " << array[2]  << ", address: " << &array[2] << endl;
    cout << "array [3] = " << array[3]  << ", address: " << &array[3] << endl;

    //  addresses are in hex form, remember from ece 212
    cout << "all boxes in the array are assigned next to each other. "<< endl;
    // the address of the array is equal to the address of the first element
    // recall in 275, if you assign a pointer to an array, it points at the address
    // of the first element


    if (&array[0] == array)
        cout << "that's true";
}