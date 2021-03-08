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
    
    //You can input any data type into its proper variable 
    
    string str;
    cout << "Input a string: ";
    cin >> str;
    cout << "You input " << str << endl << endl;

    double num;
    cout << "Input a double: ";
    cin >> num;
    cout << "You input " << num << endl << endl;

    char c;
    cout << "Input a character: ";
    cin >> c;
    cout << "You input " << c << endl << endl;

    bool b;
    cout <<"Input a boolean(1 for true/0 for false): ";
    cin >> b;
    cout << "You input " << b << endl << endl;
    
    


    
    return 0;
}