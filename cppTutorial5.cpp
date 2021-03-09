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
    cout <<"Input a boolean value(1 for true/0 for false): ";
    cin >> b;
    cout << "You input " << b << endl << endl;

    //You can also do multiple in a row
    /*
    int num1, num2;
    cin >> num1 >> num2;
    //The user will input num1 then num2
    */
    
    //If you're comfortable with these was of input, you can 
    //comment lines 28-53, so you don't have to type in the numbers
    //repeatedly. This is only an option, not doing so will not affect
    //the rest of the code. It will only make reading future outputs 
    //easier.
    
    //For now, we are just going to assume that users will put in
    //the correct data type when prompted (that includes you)
    //Future programs will include ways to check to see if the 
    //input is really what you wanted.

    //////////////////////////////////////////////////////////////////////////////////

    /*****************************************************************
     * Arrays are able to hold multiple values of a single data type 
     * at once. They are common to use in a variety of programming 
     * problems because of their ability to hold so much. They are 
     * easy to go through one by one and still easy to change each 
     * value. 
     * 
     * The way arrays work is that the address of their first value
     * is stored into the variable that you created. From there, you 
     * can access the rest by choosing the number of the element you
     * want. This will make more sense with an example. The second 
     * way to access values is using pointers, but that will be saved
     * for the full lesson on pointers.
     * 
     * Here is how to initialize an array of integers with 5 values:
     * int array[5];
     * Now we can access each of those numbers individually but there
     * is an extremely important way to do so.
     * ARRAYS START INDEXING AT 0 IN C++
     * So in this array of five elements, we can access the parts using
     * 0-4. This scheme can be generalized as in an array of N numbers,
     * You can use the numbers 0 - N-1 to pick/set a number.
     * With that initialized, we can access each number like this:
     * 
     * array[0] = 0;
     * array[1] = 1;
     * array[2] = 2;
     * array[3] = 3;
     * array[4] = 4;
     * 
     * As you can see, this bracket notation makes each element act
     * like any variable we've seen before, so we'll use them as such.
    *****************************************************************/


    
    return 0;
}