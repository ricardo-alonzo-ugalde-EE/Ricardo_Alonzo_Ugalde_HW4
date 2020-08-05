/*
Main file
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homework 4

*/
#include "numberMunchers.h"
#include <iostream>

using namespace std;

/*
Constructor initialization using "member list initialization"
*/
mulTiply::mulTiply()
{
	multiple_a = 0;
	multiple_b = 0;
}

int mulTiply::generateQuestionsAndAnswer()
{
    int num1;
    int num2;

    num1 = 1 + rand() % 10;
    num2 = 1 + rand() % 10;
    cout << "how much is " << num1 << " time " << num2 << "?" << endl;

    return num1 * num2;

}

void mulTiply::getComment(short commentType)
{
    if (commentType == 1)
    {
        cout << "great good job" << endl;
    }
    else
    {
        cout << "wrong try again" << endl;
    }
}