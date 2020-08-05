/*
Main file
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homework 4

*/

#include <iostream>
using namespace std;

class mulTiply
{
	/*
	Class constructor
	*/
public:
	int multiple_a;
	int multiple_b;


public:
/*
constructor
*/
	mulTiply();
public:

/*
general functions
*/
	int generateQuestionsAndAnswer();
	void getComment(short commentType);

};