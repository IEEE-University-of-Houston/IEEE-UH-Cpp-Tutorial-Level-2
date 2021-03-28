/*****************************************************************
 *
 *  Filename:       - cppTutorial6.cpp
 *  Last Modified:  - March 11, 2021
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
    cout << endl;
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
    //I would suggest messing with the example to understand it more
    //but this is the basic logic behind for loops

    /*****************************************************************
     *
     * 2D arrays or matrices have many uses especially for maintaining 
     * large amounts of data. These are not very different from arrays
     * in the way that they are initialized and values are given to
     * them. They also work in a similar way. The way matrices are
     * stored is that it is basically an array of addresses pointing
     * to the first value of every row. 
     * 
     * The way to initialize them is like this:
     * int matrix[3][3];
     * Here is a matrix of size 3x3 and inputting values works
     * similarly to arrays.
     * matrix[0][0] = 0;
     * matrix[0][1] = 0;
     * matrix[0][2] = 0;
     * matrix[1][0] = 0;
     * matrix[1][1] = 0;
     * matrix[1][2] = 0;
     * matrix[2][0] = 0;
     * matrix[2][1] = 0;
     * matrix[2][2] = 0;
     * 
     * Again, indexing starts at zero and goes to size-1. The bracket
     * notation is still the easiest way to access indivialual 
     * elements in the array. The way it is formatted, rows are in the
     * first bracket and columns in the second. For clarity:
     * matrix[row number][column number];
     * 
    *****************************************************************/
    int matrix[3][3];
    matrix[0][0] = 0;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 0;
    matrix[1][2] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 0;
    //Here they are actually initial as seen before and should compile.
    //Nested for loops were introduced so writing to values will be easier

    //Another way to write to a matrix is with nested for loops!
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i][j] = i + j;
        }
    }
    //As you can see, the first for loop's variable goes into the rows bracket
    //and j goes into the column bracket. It works its way through each element
    //described before
    //You do not have to have i,j in that order, but it is easier to do so
    //because you are moving row by row

    //Like before, matrices can be any data type
    double mat2[3][3];
    char mat3[5][2];
    string mat4[2][2];
    bool mat5[1][2];

    /*****************************************************************
     *
     *                       Practice Problem
     * For this problem, create a 12x12 matrix and create a 
     * multiplication table starting from 1x1 to 12x12. Display that
     * table as a 12x12 matrix and after that table is printed, 
     * print the sum of every element in the matrix.  
     * 
     * Here what your output should look like
     * 
     * 1 2 3 4 5 6 7 8 9 10 11 12 
     * 2 4 6 8 10 12 14 16 18 20 22 24
     * 3 6 9 12 15 18 21 24 27 30 33 36
     * 4 8 12 16 20 24 28 32 36 40 44 48
     * 5 10 15 20 25 30 35 40 45 50 55 60
     * 6 12 18 24 30 36 42 48 54 60 66 72
     * 7 14 21 28 35 42 49 56 63 70 77 84 
     * 8 16 24 32 40 48 56 64 72 80 88 96
     * 9 18 27 36 45 54 63 72 81 90 99 108
     * 10 20 30 40 50 60 70 80 90 100 110 120
     * 11 22 33 44 55 66 77 88 99 110 121 132
     * 12 24 36 48 60 72 84 96 108 120 132 144 
     * Sum = 6084
     * 
     * //My answer will be in the "ProblemSolutions.txt" file
     * 
    *****************************************************************/


    return 0;
}