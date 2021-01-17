/*****************************************************************
 *
 *  Filename:       - cppTutorial5.cpp
 *  Last Modified:  - Jan 11, 2021
 *  Author:         - Alex Howell
 *  Description:    - Input and arrays
 * 
*****************************************************************/
#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     *
     * Inputs are of course important because that is where the user
     * comes in and types when they are told. So if you want to make
     * a simple calculator, you would need user input for 2 numbers
     * and the symbol. To do this, you would use the "cin" keyword.
     * An example of this would be:
     * int a;
     * cin >> a;
     * This puts the user input into the variable a to use in the
     * rest of the code. Using cout with instructions would make
     * input for the user a lot easier. 
     * 
    *****************************************************************/
    int x;
    cout << "Input an integer: ";               //Ask for a number
    cin >> x;                                   //Wait for input
    cout << "You input " << x << endl << endl;  //Output to show the right input
    
    //You can input
    
    return 0;
}