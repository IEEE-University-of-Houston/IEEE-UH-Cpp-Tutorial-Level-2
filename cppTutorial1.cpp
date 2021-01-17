/*****************************************************************
 *
 *  Filename:       - cppTutorial1.cpp
 *  Last Modified:  - Jan 1, 2021
 *  Author:         - Alex Howell
 *  Description:    - Demonstrate basic hello world
 *                    program with comments
 * 
*****************************************************************/

/////////////////////////Code/////////////////////////////

/*****************************************************************
 * 
 * Include statements allow use of other files in this file
 * There are preexisting files that allow for something
 * Below, iostream allows us to use cout and endl
 * 
 *****************************************************************/
#include <iostream>

/*****************************************************************
 * 
 * Namespaces allow you to use a specific scope for a variable 
 * or keyword. Usually it is seen more with objects and classes
 * but the line "using namespace std;" makes it so that we don't
 * have to write std::cout or std::endl
 * For our sake, wew will use the namespace and focus on more 
 * intricate ideas
 * 
 * The line that would include the scopes would look like this:
 * std::cout << "Hello World!" << std::endl;
 * 
 *****************************************************************/
using namespace std;

//Every program needs one main function somewhere in the files
int main(){

    //cout is the keyword to print something to the command prompt
    //<< is the operator that tells the program that our "Hello World!"
    //is going to the cout
    //endl creates a newline which basically means the program presses enter
    cout << "Hello World!" << endl;

    //This goes at the end of the funtion to let the compiler know
    //that it reached the end and won't go passed it
    return 0;
}

//Anything after "//" or between "/*" and "*/" are comments
//Comments aren't read by the compiler, they're meant for people to read
//The double slash is a single line comment
//The /* */ is meant for multiple lines of comments like shown above 