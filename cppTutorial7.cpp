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

//Pass by reference examples
void num10(int &x);
void num20(int *&x);

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
    cout << endl;
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
    cout << "numPointer = " << *numPointer << endl << endl;
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
    //Then we can use it like normal arrays
    //But guess what! There is another way to read from arrays!
    //Exciting isn't it!
    //Anyway, we can manipulate pointer's address to get different
    //Values from the array. Of course there is a catch. You should
    //NEVER EVER use the original array pointer to do so because
    //you can lose the array completely and not be able to read from
    //it anymore. So all you need to do is make a temporary pointer
    //then this temporary pointer can do whatever and it's ok 
    //because you never lose the originally array
    //Let's try it
    int *temp = array; 
    //We don't need to dereference anything because we only care
    //about the address, and here we set a pointer equal to an
    //address so it works out.
    for(int i = 0; i < 4; i++){
        *(temp+i) = i * 2;
    }
    //So know this may crazy but it not's crazy in concept
    //Basically by adding to the address you can move through the
    //array like you usually do just without the bracket notation
    //So temp+0 is just temp[0] and so on
    //And just to prove that it works, we'll print out a value
    cout << "Check for number is array: " << array[3] << endl << endl;
    //Don't forget to free the memory
    delete [] array;

    //Now user defined functions get a little more complicated because
    //the pointer behavior is different when it's between the main 
    //function and another function. But first we need to learn to 
    //pass by reference

    /*****************************************************************
     *
     *  Passing by reference means that the variable you put into
     * a function changes without having to return it. 
     * For example:
     * x = 0
     * f(x){
     *  x = 2; 
     * }
     * cout << x; // 2
     * Now this is NOT the code to do it but an over simplified
     * version but a way to kind of see it
     * 
     * Now the notation in a function uses "&" so let's not get this
     * confused with addressing 
     * Here is an example of a function ID
     * void funct(int &x){}
     * So now whatever arguement we use for this function will
     * change when we change x 
     * 
    *****************************************************************/
    //Let's see a quick example
    int z = 0;
    num10(z); // Function is shown below, but any int put in turns to 10
    cout << "z = " << z << endl;
    //Now we know how to pass by reference
    //The same can be done with pointers
    int *zz = new int;
    num20(zz);
    cout << "zz = " << *zz << endl << endl;
    delete zz;
    //There is another way to change a pointer in a function by using a double pointer
    //But that is not super important but the notation would be as follows
    //void func(int **x){*x = new int; **x = 2;}
    //int *y; func(&y); //y will equal 2

    //The last thing is how to dynamically allocate matrices
    //We get to use a double pointer because matrices are basically an array of pointers
    //to other arrays, so we get to point to pointers
    //First we need to allocate our number of rows
    int **matrix = new int*[4];
    //Note the apostraphe because we're making an array of int pointers
    //Then we need to set each of these with how many rows we need
    for(int i = 0; i < 4; i++){
        *matrix = new int[6];
    }
    //Now we have a 4x6 matrix
    //You can access the elements like before
    //Now that we requested memory, we need to free it
    //To do that we need to delete it the opposite way that we created it 
    //Or else we lose the pointers to the columns and we have no way to 
    //access it
    for(int i = 0; i < 4; i++){
        delete [] matrix[i];
    }
    //Then we can delete the rows
    delete [] matrix;
}

//Pass by reference example functions
void num10(int &x){
    x = 10;
}

void num20(int *&x){
    *x = 20;
}