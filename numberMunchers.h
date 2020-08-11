/*
Main file
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homework 4

*/

#include <iostream>
using std::cout;
using std::cin;
using std::setw;
using std::setfill;
using std::endl;

class mulTiply
{
/*
Class variables
*/
public:
	int multiple_a;
	int multiple_b;
	int correct = 0;
	int answer;
	char retry;
	int counter = 0;
	float right = 0.0f;
	float wrong = 0.0f;
	float check = 0.0f;
	float doubleCheck = 0.0f;
	int selection = 0;
	int mastery = 0;



public:
/*
 class constructor constructor
*/
	mulTiply();
public:

/*
general functions declaarations for math operations
to be performed
*/
	void numberAdditionPadawan();
	void numberAdditionKnight();
	void numberAdditionMaster();
	void numberSubtractionPadawan();
	void numberSubtractionKnight();
	void numberSubtractionMaster();
	void numberMultiplicatorPadawan();
	void numberMultiplicatorKnight();
	void numberMultiplicatorMaster();
	void numberDivisionPadawan();
	void numberDivisionKnight();
	void numberDivisionMaster();
	void messages();
	void getMainGreeting();
	void getCommentRight();
	void getCommentWrong();
	float getFinished(float right, float wrong);
	void getReset();

};