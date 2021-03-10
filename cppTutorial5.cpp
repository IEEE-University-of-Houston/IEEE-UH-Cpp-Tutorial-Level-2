/*****************************************************************
 *
 *  Filename:       - cppTutorial5.cpp
 *  Last Modified:  - Marhc 10, 2021
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

    //Now let's actually see it in action
    int array[5];
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    array[3] = 3;
    array[4] = 4;
    //Now every element in the array has a value assigned to it

    //We can use for loops to print out every value in an array
    cout << "Print out array: \n";
    for(int i = 0; i < 5; i++){
        cout << array[i] << " "; 
        //Make sure i is in the bracket because that is what's 
        //changing each iteration
        //The condition is important to see because if i >= 5
        //for this array, then an error will occur because 
        //array[5] doesn't exist
    }
    cout << endl << endl;

    //We can also input values into an array using a for loop
    int array2[5];
    cout << "Fill in array2: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
    cout << endl;
    //This makes taking in larger amounts from values easier to keep 
    //track of and faster than going one by one

    //There is one more way to fill an array, but it not that common
    //This is being shown just to make sure you're aware of the option
    //Like everything in programming, there will be a case when this 
    //will be useful

    int array3[5] = {1, 2, 3, 4, 5};

    /*****************************************************************
     * The previously shown way to initialize arrays is that static
     * way. The size is predetermined and then values are assigned.
     * Another way to determined how big the array is to dynamically
     * create it. This means the size is determined during runtime.
     * The syntax for this is a little complicated for this point in
     * the tutorial but that doesn't mean it can't be used. Using 
     * fancy terminology, creating an array dynamically allocates
     * memory based on the data type and size during runtime. Because
     * of this, you will have to free the memory you took. You 
     * will need a pointer and it will be created like an object
     * which will be shown later. Again, the syntax doesn't have
     * to make a lot of sense yet, but it's good to see the options
     * for arrays at the same time(at least I think). Just be careful
     * how big you make these arrays. Making the number too big will 
     * cause performance issues. Worst comes to worst, try restarting
     * your computing if you think it is acting weird after a big 
     * number. To be safe keep it under 50. 
    *****************************************************************/

    //Here is the syntax for dynamically allocated array
    //int *arr = new int[5];
    //    ^there is the pointer part
    //To free the memory:
    //delete [] arr;

    //Real-time test:
    int size;
    cout << "Enter a small size for the dynamically allocated array: ";
    cin >> size;
    int *arr = new int[size];
    //Now you have an array of your choice of size

    //Now to fill it like a normal array
    for(int i = 0; i < size; i++){
        arr[i] = i;
    }

    //Now to free the memory
    delete [] arr;

    //You can do this with any data type, all you have to si replace int
    //from the example with what you want
    //For another example
    //double *arrDouble = new double[3];

    //I'd recommend at this to mess around with what you learned to see 
    //what you learned in use
    //If you need a problem to try out, here is one:
    /*****************************************************************
     *                      Practice Problem
     * Create two static arrays, one holds the name of every month
     * (hint: use string data type) and the other should hold how
     * many days the corresponding month has. Output statements
     * saying how many days are in each month.
     * Do this using a for loop and a generalized cout statement.
     * 
     * The output should be:
     * January has 31 days.
     * February has 28 days.
     * March has 31 days.
     * April has 30 days.
     * May has 31 days.
     * June has 30 days.
     * July has 31 days.
     * August has 31 days.
     * September has 30 days.
     * October has 31 days.
     * November has 30 days.
     * December has 31 days.
     * 
     * Possible Solution will be included in "ProblemSolutions.txt"
     * For a challenge try using user input to add all the months 
     * and numbers into the arrays for the same output. 
    *****************************************************************/

    return 0;
}