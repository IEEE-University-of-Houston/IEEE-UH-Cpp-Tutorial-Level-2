/*****************************************************************
 *
 *  Filename:       - cppTutorial2.cpp
 *  Last Modified:  - Jan 1, 2021
 *  Author:         - Alex Howell
 *  Description:    - Introduce different data types
 * 
*****************************************************************/

#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     *
     * Just like every other programming language, we need variables.
     * Variables hold values so we don't have to "hard code." 
     * If we use a specific number 20 times and we need to change it,
     * a variable would help so we would change it once and not in
     * every spot.
     * 
     * There are 6 data types for variables that we will see.
     * Those are: int, float, double, char, bool and void
     * 
     * int    - holds any non-decimal number from -2,147,483,648 to 2,147,483,647 
     *          or 4 bytes
     * 
     * float  - holds any decimal number in 4 bytes (better for saving memory)
     * 
     * double - holds any decimal number in 8 bytes (better for higher precision)
     * 
     * char   - holds any single character which includes letters, numbers, and symbols
     * 
     * bool   - this is meant to be a true or false data type, they are assigned using 
     *          the keywords "true" or "false"
     * 
     * void   - void is a dataless data type which isn't meant for variables but is meant
     *          for user created functions that will be shown later
     * 
     * Variables are declared by saying the data type and then vairable name.
     * You can also initialize them on the same line with an equals sign (=)
     * and the value after.
     * 
     *****************************************************************/
        
    cout << "Data type examples:" << endl;
    
    int number; //The variable is declared but not initialized
    int number2 = 1; //The variable is declared and initialized
    cout << "Variable number2(int) = " << number2 << endl;

    float number3;
    float number4 = 10.2;
    cout << "Variable number4(float) = " << number4 << endl;

    double number5;
    double number6 = 3.1415926;
    cout << "Variable number6(double) = " << number6 << endl;

    char character1;
    char character2 = 'a'; 
    //Anytime you use char, the value has to be in single quotes
    cout << "Variable character2(char) = " << character2 << endl;

    bool boolean1;
    bool boolean2 = true;   //True is also seen as 1
    bool boolean3 = false;  //False is also seen as 0
    cout << "Variable boolean2(bool) = " << boolean2 << endl;
    cout << "Variable boolean3(bool) = " << boolean3 << endl;

    //Run the program to see the outputs

    /*****************************************************************
     *
     * Variables having a general naming convention. Most importantly
     * the name has to be meaningful. For example, if you need to find
     * the area of a rectangle, you would store the numbers in variables
     * named length and width. If the name needs to be more specific,
     * the convention camelcase is used. 
     * 
     * So if you want to hold the value of the side of a box:
     * int boxSize = 2;
     * 
     * or specify the length of a rectangle
     * int rectangleLength; or int rectLength;
     * 
     *****************************************************************/

    return 0;
}