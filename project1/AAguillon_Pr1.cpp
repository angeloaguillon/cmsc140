/*
 * Class: CMSC140 CRN 25215
 * Instructor: Ping-Wei Tsai
 * Project 1
 * Description: Program that greets the user and asks for their name and favorite number. Calculates and displays various mathematical operations on the number.
                Then asks the user for two numbers and demonstrates integer and floating point division.
 * Due Date:September 27, 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Angelo Aguillon
*/

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    string name;
    double favoriteNumber;

    cout << "********** Welcome to Programming Event ********** \n\n";

    //Asks for name and later asks for favorite number
    cout << "Hello! What's your name? \n";
    cin >> name;
    cout << endl << "Nice to meet you, " << name << ". What's your favorite number? \n";
    
    cin >> favoriteNumber;
    cout << "Here are some fun facts about the number " << favoriteNumber << "!" << endl;

    //Calculates and displays various operations on favoriteNumber
    double doubleNumber = favoriteNumber * 2;
    double halfNumber = (favoriteNumber) / 2;
    double squaredNumber = favoriteNumber * favoriteNumber;
    double squareRootNumber = sqrt(favoriteNumber);

    cout << "-Double of " << favoriteNumber << " is " << doubleNumber << endl;
    cout << "-Half of " << favoriteNumber << " is " << halfNumber << endl;
    cout << "-" << favoriteNumber << " squared is " << squaredNumber << endl;
    cout << "-Square root of " << favoriteNumber << " is " << squareRootNumber << endl << endl;

    //Asks the user for two different numbers
    int wholeNumber1, wholeNumber2;
    cout << "Please enter a whole number." << endl;
    cin >> wholeNumber1;
    cout << "Now, please enter another whole number." << endl;
    cin >> wholeNumber2;
    cout << endl;

    //Calculates integer and floating point division and displays it
    int intResult = wholeNumber1 / wholeNumber2;
    double floatResult = static_cast<double>(wholeNumber1) / wholeNumber2;
    cout << "Using integer division, "<< wholeNumber1 << " divided by " << wholeNumber2 << " is " << intResult << "." << endl;
    cout << "Using floating point division, " << wholeNumber1 << " divided by " << wholeNumber2 << " is approximately "<< floatResult << "." << endl << endl;

    //Closing footer
    cout << "Thank you for participating, " << name << "!" << endl;
    cout << "PROGRAMMER: Angelo Aguillon" << endl;
    cout << "CMSC140 Project 1" << endl;
    cout << "Due Date: September 27, 2023" << endl;

    return 0;
}
