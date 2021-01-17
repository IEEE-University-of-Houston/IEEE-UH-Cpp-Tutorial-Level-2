/*****************************************************************
 *
 *  Filename:       - cppTutorial4.cpp
 *  Last Modified:  - Jan 11, 2021
 *  Author:         - Alex Howell
 *  Description:    - Introduction to if statements 
 *                    and loops
 * 
*****************************************************************/

#include <iostream>
using namespace std;

int main(){

    /*****************************************************************
     *
     * If statements are used when you need to have a certain code
     * execute only if a certain condition is met
     * The structure is if(<conditional>){}
     * You use the keyword "if" 
     * The conditional is inside the parenthesis right after if
     * Then curlybrackets follow that, anything in those curly 
     * brackets will execute if that condition is true
     * 
    *****************************************************************/
    int age = 30;
    cout << "if example" << endl;
    if(age < 60){
        cout << "You are below 60" << endl << endl;
    }
    //Here the cout statement prints because the variable 
    //age is less than 50

    if(age > 60){
        cout << "You are above 60" << endl << endl;
    }
    //Here the cout statement will not print because the condition is
    //false. The compiler will skip over it and move onto the next line

    /*****************************************************************
     *
     * You can also add an else statement to your if statement so the
     * else will execute if the condition after the if statement is
     * false 
     * 
    *****************************************************************/
    age = 70;
    cout << "if/else example" << endl;
    if(age < 60){

        cout << "Inside if statement" << endl;
        cout << "You are below 60" << endl << endl;

    } else {
        
        cout << "Inside else statement" << endl;
        cout << "You are above 60" << endl << endl;

    }
    //Age is now 70 which makes the condition false. This means the else
    //statement will execute

    /*****************************************************************
     *
     * The last thing to add to these if/else statements is an
     * else if statement. It pretty much adds another if statement
     * that gets checked right after the if statement but all of these
     * are checked one after the other which is why it's different
     * for only using if statements
     * 
    *****************************************************************/
    cout << "First else if example" << endl;
    if(age < 30){
        cout << "You are below 30" << endl << endl;
    } else if(age <= 60) {
        cout << "You are between 30 and 60" << endl << endl;
    } else {
        cout << "You are above 60" << endl << endl;
    }
    //This checks to see if age is less than 30, that is false so it
    //goes to the else if statement. The else if condition is false
    //so it executes the else statement
    //If the if or else if statements were true if would skip everything
    //else after and start again after the end of the else statement

    //Here we'll see why this is different that just if statements
    cout << "if statements vs else ifs" << endl;
    age = 21;
    if(age < 30){
        cout << "You are below 30" << endl;
    } else if(age <= 60) { 
        //Since < 30 is already checked, this condition is basically
        //age >= 30 && age <= 60
        cout << "You are between 30 and 60" << endl;
    } else {
        cout << "You are above 60" << endl;
    }
    //The above will only print "You are below 30"
    if(age < 30){
        cout << "You are below 30" << endl;
    } 
    if(age <= 60) {
        cout << "You are between 30 and 60" << endl;
    } 
    if(age < 100) {
        cout << "You are above 60" << endl;
    }
    cout << endl;
    //This section will print all three messages which isn't
    //what we want
    //Of course if can change the if statement conditions
    //so it doesn't happen but this is to make a point

    /*****************************************************************
     *
     * There is something called a switch statment which is a 
     * different way to do if/else if/else statements
     * You take in one variable comparable to the condition in 
     * an if statement. Then there will be cases for each if/else if
     * statement. These cases have to have a constant value not a 
     * condition. You can include a default statement at the end 
     * which is the switch version of an else.
     * Each case has to end with a break statement or else it will
     * run every case statement after the first one it enters
     * You can test that on your own below
     * 
    *****************************************************************/
    age = 30;
    cout << "switch example" << endl;
    switch(age){
        case 10:
            cout << "age is 10" << endl;
            break;
        case 30:
            cout << "age is 30" << endl;
            break;
        default:
            cout << "age not found" << endl;
    }
    cout << endl;

    /*****************************************************************
     *
     * Now we will look at loops. Loops repeat the same block of
     * code until a certain condition is met. It is important that
     * there is a condition or else the code would run forever
     * which is not good. There are three kinds of loops: for, while
     * and do while. do while will not be shown because a while
     * loop can do anything a do while loop can do. But to make sure
     * the reason it exists is known, the point is that anything in
     * the do while loop is run once no matter what when that isn't 
     * always the case for the other two loops. Again, a while loop
     * can still do whatever a do while can do
     * 
    *****************************************************************/
    
    /*****************************************************************
     *
     * We'll start with the for loop. It uses the keyword "for" 
     * followed by parenthesis with three statements inside. The
     * first is an initialization of a variable to use for 
     * iterations in the loop. In C++, you are allowed to declare
     * and initialize the variable in the for loop, but it only exists
     * inside of that for loop (this is an example of scope). The 
     * second statement is the most important, the condition. It 
     * usually includes the variable initialized in the first 
     * statement but doesn't have to. The last statement how the
     * initialized variable changes depending on what you need. 
     * This statement is executed at the very bottom of the loop
     * before it comes back and checks the condition.
     * 
    *****************************************************************/
    cout << "for example:" << endl;
    for(int i = 0; i < 5; i++){
        //first statement declares and initializes i
        //second is the condition where i is less than 5
        //third increments i by one every loop
        cout << "i is " << i << endl;
    }
    cout << endl;
    /*****************************************************************
     *
     * The way this loops works is as follows:
     * 1. i = 0
     * 2. Check if i < 5 (true)
     * 3. print "i is 0"
     * 4. increment i by 1 (i=1)
     * 5. check condition (true)
     * 6. print "i is 1"
     * 7. increment i (i=2)
     * 8. check conditional (true)
     * 9. print "i is 2"
     * 10. increment by 1 (i=3)
     * 11. check conditional (true)
     * 12. print "i is 3"
     * 13. increment by 1 (i=4)
     * 14. check conditional (true)
     * 15. print "i is 4"
     * 16. increment by 1 (i=5)
     * 17. check conditional (false)
     * 18. exit loop
     * 
    *****************************************************************/

    //Try to predict the output for these examples
    cout << "Second example: " << endl;
    for(int i = 1; i < 10; i+=2){
        cout << i << endl;
    }
    cout << endl;

    //One more example
    cout << "Third Example: " << endl;
    for(int x = 20; x >= 0; x = x - 4){
        cout << x << endl;
    }
    cout << endl;

    //Another example
    cout << "Fourth example: " << endl;
    for(int a = 0; a <= 100; a++){
        if(a % 10 == 0){
            cout << a << " ";
        }
    }
    cout << endl << endl;

    /*****************************************************************
     *
     * While loops are another popularly used loop that are a lot
     * simpler but they are easier to mess up and loop forever. The
     * for loop has statements set to make sure it runs a certain
     * amount of times, but the while loop only has a condition.
     * The syntax of a while loop is as follows:
     * 
     * while(condition){
     *    //stuff in the loop
     * }
     * 
     * The condition is checked at the end of the loop, if false
     * the loop is exited
     * 
    *****************************************************************/

    //First example
    cout << "First while loop example: " << endl;
    int count = 0;              //Initialize iteration variable
    while(count < 10){
        cout << count << " ";  //Print out variable
        count++;                //Increase count by 1
    }
    cout << endl << endl;
    //the "count++" statement is important because without it, the 
    //loop would run FOREVER due to the condition not getting met
    //If there is an infinite loop or you see that the program is
    //not finishing use CTRL + C to stop it or close the terminal

    //Second example
    cout << "Second while loop example: " << endl;
    count = 20;
    while(count > 0){
        if(count % 2 == 1){
            cout << count << " ";
        }
        count--;
    }
    cout << endl << endl;

    //Third example
    cout << "Third while loop example: " << endl;
    while(count > 100){
        cout << "loop" << endl;
    }
    cout << "End of third while loop" << endl << endl;
    //You should be able to see that this loop does not
    //do anything because the condition is already false


    return 0;
}