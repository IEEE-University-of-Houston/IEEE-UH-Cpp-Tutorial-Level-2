/*****************************************************************
 *
 *  Filename:       - cppTutorial3.cpp
 *  Last Modified:  - Jan 6, 2021
 *  Author:         - Alex Howell
 *  Description:    - Introduces all the operators and
 *                    their precedence
 * 
*****************************************************************/

#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     * 
     *                           Operators
     * Operators are symbols used carry out arithmetic and logic 
     * statements. These also have an order precedence so we have a
     * set system of what comes before the others, just like how
     * multiplaction and division come before addition and subration
     * but it's expanded for all the other operators we have.
     * Info is used from: 
     * https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
     * 
     ****************************************************************/

    /*****************************************************************
    *                         Highest Priority  
    *                         (Left to Right)  
    * Parenthesis (()), brackets ([]), arrow (->), 
    * postfix increment(++/--), and dot operator(.) are 
    * first in the precedence
    *****************************************************************/
    //Parenthesis are just like in math, to separate certain parts
    int a = 4 * (2 + 2); //16

    //Brackets are used for arrays that we'll see later
    int array[] = {1,2,3};

    //The arrow operator is for pointers which we'll see
    //later too. They are used to assign values to attributes
    //in an object

    //The dot operater is used a lot in Object Oriented Programming(OOP)
    //It's how you would use functions for the specific object
    //An example would be 
    /*****************************************************************
     * numArray.size();
     * This would work as long as size is a method of the object type
     * that numArray is
     * By the name it would give you the number of values in the
     * array
     * We'll see this more later
     ****************************************************************/

    /*****************************************************************
    *                    Second Highest Priority
    *                       (Right to Left)     
    * Unary minus (-), logical not (!), bitwise not (~), 
    * prefix increment (++/--), type casting, address reference(&),
    * pointer dereference (*)
    *****************************************************************/
    //The unary minus is just a negative sign, it has high priority
    //because it's important to come before calculations
    int x = -5;

    //Logicial not turns true into false and false into true
    bool trueVar = true;
    cout << "trueVar = " << trueVar << endl;
    bool notTrueVar = !trueVar;
    cout << "notTrueVar = " << notTrueVar << endl << endl;

    //The bitwise operator flips all the bits in the number
    //0 turns to 1 and 1 turns to 0
    int num = 1; //0000 0001
    int num2 = ~num; //1111 1110 
    cout << "num2 = " << num2 << endl << endl;

    //The prefix increment is like the postfix increment but comes
    //before the number or variable
    int num3 = 5;
    int prefix = ++num3;
    cout << "prefix = " << prefix << endl << endl;

    //Address reference and pointer dereference are a little 
    //complicated and we'll see them a bit more later
    //Address reference gives the address in the computer
    //of where to value is stored
    //Pointer dereference gives you the value from an address
    int *ptr = &num3; //Stores the address of num3
    int ptrNum = *ptr; //Stores the number from the address
    cout << "ptr = " << ptr << endl;
    cout << "ptrNum = " << ptrNum << endl << endl;

    /*****************************************************************
    *                    Third Highest Priority
    *                       (Left to Right)     
    * Multiplication (*), division (/), modulus(%)
    *****************************************************************/
    //Multiplcation and division are straight forward
    int mult = num * num2;
    cout << "mult = " << mult << endl;
    cout << "5/2 = " << 5/2 << endl;
    //But integer division is something programmers need to be aware of
    //Integer division exists because integers can't hold decimals
    //and dividing by two decimals numbers will always result in a
    //whole number
    int intDiv = 5/2;
    cout << "integer division of 5/2: " << intDiv << endl;
    //Integer division simply cuts off the remainder and only
    //leaves the whole number part

    //Modulus finds the remainder of the two numbers used
    //So when you divide 5 by 2 there is a remainder of 1
    //Therefore, 5 % 2 = 1
    cout << "5 % 2 = " << 5 % 2 << endl << endl; 


    /*****************************************************************
    *                    Fourth Highest Priority
    *                       (Left to Right)     
    * Addition (+), subtraction (-)
    *****************************************************************/
    //Thes   e are just adding and subtracting
    cout << "200 + 43 = " << 200 + 43 << endl;
    cout << "35 - 30 = " << 35 - 30 << endl << endl;

    /*****************************************************************
    *                    Fifth Highest Priority
    *                       (Left to Right)     
    * Bitwise shift (>> / <<)
    *****************************************************************/
    //These just shift all the bits of a number left or right
    //So 3 is 0011 in binary. Left shift would make 0110 which
    //is the number 6
    //Right shift 3 and it makes 0001 which is just one
    cout << "Left shift one on 3: " << (3<<1) << endl;
    cout << "Right shift one on 3: " << (3>>1) << endl;
    //You can also shift more than one time
    cout << "Left shift three on 1: " << (1<<3) << endl << endl;

    /*****************************************************************
    *                    Sixth Highest Priority
    *                       (Left to Right)     
    * Inequality signs (<, >, <=, >=)
    *****************************************************************/
    //These signs are the same as in basic math classes
    //> - greater than
    //< - less than 
    //<= - less than or equal to
    //>= - greater than or equal to
    //When these are used they result in true or false values
    bool inequ = 3 < 1;
    bool inequ2 = 2 >= 2;
    cout << "3 < 1 is " << inequ << endl;
    cout << "2 >= 2 is " << inequ2 << endl << endl;
    
    /*****************************************************************
    *                    Seventh Highest Priority
    *                       (Left to Right)     
    * Equality signs (==, !=)
    *****************************************************************/
    //== checks to see if two values are equal to each also resulting
    //in true or false
    cout << "3 == 3 is " << (3 == 3) << endl;
    cout << "53 == 1 is " << (53 == 1) << endl;

    //!= checks to see if the two values are not equal to each other
    cout << "3 != 3 is " << (3 != 3) << endl;
    cout << "53 != 1 is " << (53 != 1) << endl << endl;

    /*****************************************************************
    *            Eighth, Ninth, and Tenth Highest Priority
    *                       (Left to Right)     
    * Bitwise AND (&), Bitwise XOR (^), Bitwise OR (|)
    *****************************************************************/
    //Bitwise AND is the eighth priority
    //This ANDs the bits of the two numbers resulting in another number
    //Both bits have to be 1 to result in a 1 otherwise it'll be 0
    int bit52 = 52; //0010 1010
    int bit30 = 30; //0001 1110
    int bitAND = bit52 & bit30;
    cout << "52 & 30 (0010 1010 & 0001 1110) = " << bitAND << endl;

    //Bitwise XOR is the ninth priorty
    //It works like the AND but the result is a 1 only if one is a 1
    //and the other is a 
    int bitXOR = bit52 ^ bit30;
    cout << "52 ^ 30 (0010 1010 ^ 0001 1110) = " << bitXOR << endl;

    //Bitwise OR is the tenth priority
    //This also works like the other bitwise operators bit this one
    //results in a 1 if one or both of the numbers is a one
    int bitOR = bit52 | bit30;
    cout << "52 | 30 (0010 1010 | 0001 1110) = " << bitOR << endl << endl;

    /*****************************************************************
    *            Eleventh and Twelfth Highest Priority
    *                       (Left to Right)     
    * Logical AND (&&), Logical OR (||)
    *****************************************************************/
    //The eleventh priority is the logical AND
    //Both sides have to be true to result in true or 1
    int z = 21;
    cout << "z is " << z << endl;

    cout << "z > 18 && z < 100 is " << (z > 18 && z < 100) << endl; 
    //21 is greater than 18 and 21 is less than 100 so this is true

    cout << "z < 18 && z > 100/5 is " << (z < 18 && z > 100/5) << endl << endl;
    //21 is not less than 18 so this is false

    /*****************************************************************
    *                     Thirteenth Priority
    *                       (Right to Left)     
    * The ?: conditional
    *****************************************************************/
    //The ?: conditional is basically a condensed if statement 
    //used to assign a value based on whether the conditional is 
    //true or not
    int qMark = (z < 50 || z == 30) ? 10 : 80;
    cout << "qMark when z is " << z << " = " << qMark << endl;
    //This says if z < 50 || z == 30 is true, then qMark = 10
    //If it's false, then qMark = 80

    z = 60;
    qMark = (z < 50 || z == 30) ? 10 : 80;
    cout << "qMark when z is " << z << " = " << qMark << endl << endl;

    /*****************************************************************
    *                     Fourteenth Priority
    *                       (Right to Left)     
    * Assignment operators (=, +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
    *****************************************************************/
    //These are just assigning values to variables but some of them cut
    //out some work
    //First we'll show the basic = assignment
    int equ = 10;
    cout << "equ = " << equ << endl;
    //For the rest, it's the operators we have seen before, but using
    //these include the inital number with them
    //For example we can show
    equ += 20;
    cout << "equ += 20 is " << equ << endl;
    cout << "equ = " << equ << endl;
    //The equivalent to this would be equ = equ + 20 and get the same value
    //This works for all of the assignment operators
    equ *= 4;
    cout << "equ *= 4 is " << equ << endl;
    cout << "equ = " << equ << endl;

    equ %= 6;
    cout << "equ %= 6 is " << equ << endl;
    cout << "equ = " << equ << endl;

    return 0;
}