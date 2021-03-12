/*****************************************************************
 *
 *  Filename:       - cppTutorial6.cpp
 *  Last Modified:  - Marhc 11, 2021
 *  Author:         - Alex Howell
 *  Description:    - Nested if statements/loops and Matrices
 * 
*****************************************************************/
#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     *
     * Nested if statements and loops are straightforward as long as 
     * you understand how they work on their own. I will show some
     * examples to make sure you can follow the logic correctly.
     * 
    *****************************************************************/

    int x = 0, y = 2;
    cout << "x = " << x << ", y = " << y << endl;
    if(x == 0){
        cout << "x is equal to 0" << endl;
        if(x < y){
            cout << "x is less than y" << endl;
        }
        else{
            cout << "x is less than or equal to y" << endl;
        }
    }
    else{
        cout << "x is not equal to 0" << endl;
        if(x < y){
            cout << "x is less than y" << endl;
        }
        else{
            cout << "x is less than or equal to y" << endl;
        }
    }
    cout << endl;
    //Here is a simple set of nested if/else statements
    //By compiling the code, it is easy to see where the code follows from 
    //the cout statements
    //If you wanted to, you can use user input for variables and then see how
    //the statements work a little more

    //Here is an example of a nested for loop
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    //From the output after compiling, you can see how it works and the loops
    //iterate but I will write out another way to see it 
    /*****************************************************************
     *
     * i initialized and set to 0
     * j initialized and set to 0
     * cout statement
     * j=1
     * cout statement
     * j=2
     * cout statement
     * j=3
     * j < 3 is false
     * i=1
     * j=0
     * cout statement
     * j=1
     * cout statement
     * j=2
     * cout statement
     * j=3
     * j < 3 is false
     * i=2
     * j=0
     * cout statement
     * j=1
     * cout statement
     * j=2
     * cout statement
     * j=3
     * j < 3 is false
     * i=3
     * i < 3 is false
     * exit for loops 
     * 
    *****************************************************************/

    return 0;
}