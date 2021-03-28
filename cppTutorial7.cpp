/*****************************************************************
 *
 *  Filename:       - cppTutorial7.cpp
 *  Last Modified:  - March 28, 2021
 *  Author:         - Alex Howell
 *  Description:    - Pointers
 * 
*****************************************************************/

#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     *
     * Pointers can be a difficult concept to grasp because it's a
     * little harder to visualize what's going on. Pointers hold the
     * address of a value or another variable, so it's easy to 
     * manipulate values in different places in your code. 
     * Instead of telling it the variable and the computer
     * looks for the variable address and then the value, you can
     * tell it the address and it know exactly where to look in the
     * memory. You can pass variable by reference into functions so
     * you can just use the variable you want to change as an 
     * argument rather than returning another value. Pointers are
     * also used to create and navigate arrays(you've seen the before)
     * and they are used to dynamically allocate memory meaning you
     * can take a certain amount of memory when the code is running
     * rather than a predetermined value at compilation.
     *
     * Pointers still have to match the data type of the variable
     * that they will use. So if you want to store the address of
     * an integer, then you need to initialize the pointer as an
     * integer.
     * 
     * Here is how to initialize a pointer:
     * int *ptr;
     * 
     * Now the most important part is how to handle pointers and the
     * addresses of other variables. We use the ampersand (&) to
     * give the address of a variable to a pointer like this
     * int var = 10;
     * int *ptr = &var;
     * Now ptr holds the address of var
     * 
     * After the pointer is initialized, we can dereference it by 
     * using the apostrophe again. 
     * int var = 10;
     * int *ptr = &var;
     * cout << *ptr; //prints out 10
     * 
     * So now let's make sure we know right from wrong on how to use
     * these
     *
     * int num = 10;
     * int *ptr = num; //WRONG
     * int *ptr = &num; //CORRECT
     * int ptr = &num; //WRONG
     * int *ptr = 10; //WRONG
     * // Now pretend ptr is correctly initialized
     * ptr = &num; //CORRECT
     * ptr = num //WRONG
     * *ptr = num; //CORRECT
     * Note you can assign numbers to pointers by dereferencing it
     * first
     * 
     * Also note pointers can be used for all the other data types.
     * not just int. It just makes examples more consistent :)
     * Before showing everything else, I will write out the correct
     * way again
     *  
    *****************************************************************/
    int num = 1; 
    double doub = 2.3;
    char c = 'i';

    int *numPtr = &num;
    double *doublePtr = &doub;
    char *charPtr = &c;

    cout << "num is at address: " << numPtr << endl;
    cout << "num has the value of: " << *numPtr << endl;
    cout << "doub is at address: " << doublePtr << endl;
    cout << "doub has the value of: " << *doublePtr << endl;
    cout << "c is at address: " << (void *) charPtr << endl;
    cout << "c has the value of: " << *charPtr << endl;
    //(void *) needs to be in front of the character pointer 
    //because cout is reading it as a string since strings are
    //just character arrays

    //Now you get too see where variables are stored!
    //Let's see what else we can do

    //As seen in previous tutorials we've seen
    //int *arr = new int[4]
    //Well, there's a little more to it
    int *numPointer = new int;
    *numPointer = 256;
    cout << "numPointer = " << *numPointer << endl;
    //Using the "new" keyword asks for the space needed by the
    //data type and keeps it until it needs to be used BUT
    //anytime "new" is used the memory needs to be freed to
    //be used again or else the program will make your computer 
    //run slower with all the memory hasn't been given back
    //To do this, we use "delete"
    delete numPointer;
    //If you forget, restarting your computer should help

    //We can do the same notation will arrays
    int *array = new int[4];
    
    return 0;
}