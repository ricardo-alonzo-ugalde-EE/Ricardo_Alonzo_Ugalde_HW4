/*
Main file
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homework 4

*/


#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "numberMunchers.h"
using namespace std;


int main()
{
    
    srand(time(0));
    int correctAns;
    int answer;
    string choice;
    
    mulTiply question;

    

    do
    {
        question.generateQuestionsAndAnswer();
        do
        {
            cout << "Enter your answer" << endl;
            cin >> answer;
            if (answer == correctAns)
            {
                question.getComment(1);
            }
            else
            {
                question.getComment(0);
            }
        } while (answer != correctAns);
        cout << "wrong answer try another one? y/n" << endl;
    } while (choice == "yes");
    return 0;
}







