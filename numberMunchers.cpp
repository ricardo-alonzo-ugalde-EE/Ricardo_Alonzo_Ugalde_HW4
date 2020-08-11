/*
Main file
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homework 4

*/
#include "numberMunchers.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::setw;
using std::setfill;
using std::endl;

/*
Constructor initialization using "member list initialization"
*/
mulTiply::mulTiply()
{
	multiple_a = 0;
	multiple_b = 0;
    answer = 0;
    retry = 'n';
}

/*
A set of addition, subtraction, division, and multiplication functions
that are called by the main greeting. The Padawan level function are the easiest
t complete, followed by the Knight, and finally Master.
*/
void mulTiply::numberAdditionPadawan()
{
    while (answer != -1)
    { 
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts 
        correct and incorrect answers and calculates a percentage. The percentage is then used to 
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 10 ;
        multiple_b = 1 + rand() % 10;
        cout << "how much is " << multiple_a << " plus " << multiple_b << "?" << endl;
        correct = multiple_a + multiple_b;
        cin >> answer;
    
        while (answer != correct && counter <= 10)
        {
            //counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);
        
        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);
             

        }
        else
        {
            break;
        }

        
    
    }

}
void mulTiply::numberAdditionKnight()
{
    while (answer != -1)
    {
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 100;
        multiple_b = 1 + rand() % 10;
        cout << "how much is " << multiple_a << " plus " << multiple_b << "?" << endl;
        correct = multiple_a + multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberAdditionMaster()
{
    while (answer != -1)
    {
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 100;
        multiple_b = 1 + rand() % 100;
        cout << "how much is " << multiple_a << " plus " << multiple_b << "?" << endl;
        correct = multiple_a + multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberSubtractionPadawan()
{
    while (answer != -1)
    {
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 10;
        multiple_b = 1 + rand() % 10;
        cout << "how much is " << multiple_a << " minus " << multiple_b << "?" << endl;
        correct = multiple_a - multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberSubtractionKnight()
{
    while (answer != -1)
    {
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 10;
        multiple_b = 1 + rand() % 100;
        cout << "how much is " << multiple_a << " minus " << multiple_b << "?" << endl;
        correct = multiple_a - multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberSubtractionMaster()
{
    while (answer != -1)
    {
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 100;
        multiple_b = 1 + rand() % 100;
        cout << "how much is " << multiple_a << " minus " << multiple_b << "?" << endl;
        correct = multiple_a - multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberDivisionPadawan()
{
    while (answer != -1)
    {
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        double corr = 0.0;
        double ans = 0.0;
        double multiple_1 = 1.0+ rand() %  15;
        double multiple_2 = 1.0 + rand() % 5;
        cout << "how much is " << multiple_1 << " divided by " << multiple_2 << "?" << endl;
        corr = multiple_1 / multiple_2;
        cout << corr;
        
        cin >> ans;

        while (ans != corr && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> ans;
            wrong++;
            getFinished(right, wrong);

        }
        if (ans == corr && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberDivisionKnight()
{
    while (answer != -1)
    {
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        double corr = 0.0;
        double ans = 0.0;
        double multiple_1 = 1.0 + rand() % 50;
        double multiple_2 = 1.0 + rand() % 10;
        cout << "how much is " << multiple_1 << " divided by " << multiple_2 << "?" << endl;
        corr = multiple_1 / multiple_2;
        cout << corr;

        cin >> ans;

        while (ans != corr && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> ans;
            wrong++;
            getFinished(right, wrong);

        }
        if (ans == corr && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberDivisionMaster()
{
    while (answer != -1)
    {
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        double corr = 0.0;
        double ans = 0.0;
        double multiple_1 = 1.0 + rand() % 100;
        double multiple_2 = 1.0 + rand() % 100;
        cout << "how much is " << multiple_1 << " divided by " << multiple_2 << "?" << endl;
        corr = multiple_1 / multiple_2;
        cout << corr;

        cin >> ans;

        while (ans != corr && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> ans;
            wrong++;
            getFinished(right, wrong);

        }
        if (ans == corr && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberMultiplicatorPadawan()
{
    while (answer != -1)
    {
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 10;
        multiple_b = 1 + rand() % 10;
        cout << "how much is " << multiple_a << " times " << multiple_b << "?" << endl;
        correct = multiple_a * multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberMultiplicatorKnight()
{
    while (answer != -1)
    {
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 100;
        multiple_b = 1 + rand() % 10;
        cout << "how much is " << multiple_a << " times " << multiple_b << "?" << endl;
        correct = multiple_a * multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}
void mulTiply::numberMultiplicatorMaster()
{
    while (answer != -1)
    {   
        srand(time(0));
        counter++;
        /*
        rand function is called for to generate varying values for the variable a and b.
        TH program then asks the user for an answer based on the generated values for the variables
        and prints out two messages depending on wether or not answer is correct or incorrect.
        The user gets 10 tries before the getFinished function is called which counts
        correct and incorrect answers and calculates a percentage. The percentage is then used to
        prompt two more messages.
        */
        multiple_a = 1 + rand() % 100;
        multiple_b = 1 + rand() % 100;
        cout << "how much is " << multiple_a << " times " << multiple_b << "?" << endl;
        correct = multiple_a * multiple_b;
        cin >> answer;

        while (answer != correct && counter <= 10)
        {
            counter++;
            getCommentWrong();
            cin >> answer;
            wrong++;
            getFinished(right, wrong);

        }
        if (answer == correct && counter <= 10)
        {

            right++;
            getCommentRight();
            getFinished(right, wrong);


        }
        else
        {
            break;
        }



    }

}

/*
Earlier version of a message function that 
was not used.
*/
void mulTiply::messages()
{
    if (counter == 3)
    {
        cout << "Do. Or do not. There is no try.\n\n";
    }
    else if (counter == 5)
    {
        cout << "Never tell me the odds!\n\n";
    }
    else if (counter == 10)
    {
        cout << "You are on the math council, but we do not grant you the rank of Master. \n\n";
    }
    else if (counter == 15)
    {
        cout << "Power! Unilimitted Power!!.\n\n";
    }
}

/*
When a user gets a correct answer, this function prints out a random
positive message by using rand()
*/
void mulTiply::getCommentRight()
{
    
    switch (rand() % 4)
    {
        case 0: cout << endl << "Great, kid. Don't get cocky.\n"; break;
        case 1: cout << endl << "In my experience, There's no such thing as luck.\n"; break;
        case 2: cout << endl << "Never tell me the odds!\n"; break;
        case 3: cout << endl << "The Force is strong with this one.\n"; break;
    }

}

/*
When a user gets an incorrect answer, this function prints out a random
negative message by using rand()
*/
void mulTiply::getCommentWrong()
{
   
    switch (rand() % 4)
    {
    case 0: cout << endl << "Use the Force, Luke.\n"; break;
    case 1: cout << endl << "You were the chosen one! It was said that you would destroy the Sith, not join them.\nYou were to bring balance to the Force, not leave it in darkness!!!\n"; break;
    case 2: cout << endl << "Don't give in to hate. That leads to the Dark Side.\n"; break;
    case 3: cout << endl << "Fear is the path to the dark side.\n"; break;
    }

}
/*


The bread and butter of the program. This main greeting allows you to select math topics by level
or at random.
*/
void mulTiply::getMainGreeting()
{
    /*
    This is the main greeting and input selection screen for the entire program. Arithmatic type and 
    mastery can be selected here.
    */
    cout << setfill('`') << setw(77) << "`" << endl;
    cout << setfill('`') << setw(77) << "`" << endl;
    cout << setw(50) << "Hello There!" << setw(27) << "`" << endl; ;
    cout << setfill('`') << setw(77) << "`" << "\n" << endl;
    cout << "Select your path:\n";
    cout << "1 = Addition, 2 = Subtraction, 3 = Division, 4 = Multiplication, 5 = The force shall guide me \n";
    cin >> selection;
    if (selection == 1)
    {   /*
        Once an arithmatic operation is selected, the user is then given 4 options to chose from. Options 1-3 
        have a set difficulty level, while option 4 utilizes rand() to pseduorandomly select difficulty level.
        */
        cout << "Addition Selected. Chose your mastery: ";
        cout << "1 = Padawan, 2 = Knight, 3 = Master, 4 = The force shall guide me. \n";
        cin >> mastery;
        if (mastery == 1)
        {
            numberAdditionPadawan();
        }
        else if (mastery == 2)
        {
            numberAdditionKnight();
        }
        else if (mastery == 3)
        {
            numberAdditionMaster();
        }
        else if (mastery == 4)
        {
            
            switch (rand() % 3)
            {
            case 0: numberAdditionPadawan(); break;
            case 1: numberAdditionKnight(); break;
            case 2: numberAdditionMaster(); break;
            
            }
        }
        else
        {
            cout << "Invalid Selection. Returning to main. ";
            getMainGreeting();
        }
    }
        /*
        Once an arithmatic operation is selected, the user is then given 4 options to chose from. Options 1-3
        have a set difficulty level, while option 4 utilizes rand() to pseduorandomly select difficulty level.
        */
    else if (selection == 2)
    {
        cout << "Subtraction Selected. Chose your mastery: ";
        cout << "1 = Padawan, 2 = Knight, 3 = Master, 4 = The force shall guide me. \n";
        cin >> mastery;
        if (mastery == 1)
        {
            numberSubtractionPadawan();
        }
        else if (mastery == 2)
        {
            numberSubtractionKnight();
        }
        else if (mastery == 3)
        {
            numberSubtractionMaster();
        }
        else if (mastery == 4)
        {
            
            switch (rand() % 3)
            {
            case 0: numberSubtractionPadawan(); break;
            case 1: numberSubtractionKnight(); break;
            case 2: numberSubtractionMaster(); break;

            }
        }
        else
        {
            cout << "Invalid Selection. Returning to main. ";
            getMainGreeting();
        }
    }
        /*
        Once an arithmatic operation is selected, the user is then given 4 options to chose from. Options 1-3
        have a set difficulty level, while option 4 utilizes rand() to pseduorandomly select difficulty level.
        */
    else if (selection == 3)
    {
        cout << "Division Selected. Chose your mastery: ";
        cout << "1 = Padawan, 2 = Knight, 3 = Master, 4 = The force shall guide me. \n";
        cin >> mastery;
        if (mastery == 1)
        {
            numberDivisionPadawan();
        }
        else if (mastery == 2)
        {
            numberDivisionKnight();
        }
        else if (mastery == 3)
        {
            numberDivisionMaster();
        }
        else if (mastery == 4)
        {
            
            switch (rand() % 3)
            {
            case 0: numberDivisionPadawan(); break;
            case 1: numberDivisionKnight(); break;
            case 2: numberDivisionMaster(); break;

            }
        }
        else
        {
            cout << "Invalid Selection. Returning to main. ";
            getMainGreeting();
        }
    }
        /*
        Once an arithmatic operation is selected, the user is then given 4 options to chose from. Options 1-3
        have a set difficulty level, while option 4 utilizes rand() to pseduorandomly select difficulty level.
        */
    else if (selection == 4)
    {
    cout << "Multiplication Selected. Chose your mastery: ";
    cout << "1 = Padawan, 2 = Knight, 3 = Master, 4 = The force shall guide me. \n";
    cin >> mastery;
    if (mastery == 1)
        {
            numberMultiplicatorPadawan();
        }
        else if (mastery == 2)
        {
            numberMultiplicatorKnight();
        }
        else if (mastery == 3)
        {
            numberMultiplicatorMaster();
        }
        else if (mastery == 4)
        {
            
            switch (rand() % 3)
            {
            case 0: numberMultiplicatorPadawan(); break;
            case 1: numberMultiplicatorKnight(); break;
            case 2: numberMultiplicatorMaster(); break;

            }
        }
        else
        {
            cout << "Invalid Selection. Returning to main. ";
            getMainGreeting();
        }
    }
        /*
        Once an arithmatic operation is selected, the user is then given 4 options to chose from. Options 1-3
        have a set difficulty level, while option 4 utilizes rand() to pseduorandomly select difficulty level.
        */
    else if (selection == 5)
    {
    cout << "Force Chose Selected. Chose your mastery: ";
    cout << "1 = Padawan, 2 = Knight, 3 = Master, 4 = The force shall guide me. \n";
    cin >> mastery;
    if (mastery == 1)
        {
            srand(time(0));
            switch (rand() % 4)
            {
            case 0: numberMultiplicatorPadawan(); break;
            case 1: numberAdditionPadawan(); break;
            case 2: numberSubtractionPadawan(); break;
            case 3: numberDivisionPadawan(); break;
            }
        }
        else if (mastery == 3)
        {
            srand(time(0));
            switch (rand() % 4)
            {
            case 0: numberMultiplicatorKnight(); break;
            case 1: numberAdditionKnight(); break;
            case 2: numberSubtractionKnight(); break;
            case 3: numberDivisionKnight(); break;
            }            
        }
        else if (mastery == 3)
        {
            srand(time(0));
            switch (rand() % 4)
            {
            case 0: numberMultiplicatorMaster(); break;
            case 1: numberAdditionMaster(); break;
            case 2: numberSubtractionMaster(); break;
            case 3: numberDivisionMaster(); break;
            }
        }
        else if (mastery == 4)
        {
            /*
            random selection of every possible mastery and arithmatic combination available.
            */
            srand(time(0));
            switch (rand() % 12)
            {
            case 0: numberMultiplicatorMaster(); break;
            case 1: numberAdditionMaster(); break;
            case 2: numberSubtractionMaster(); break;
            case 3: numberDivisionMaster(); break;
            case 4: numberMultiplicatorKnight(); break;
            case 5: numberAdditionKnight(); break;
            case 6: numberSubtractionKnight(); break;
            case 7: numberDivisionKnight(); break;
            case 8: numberMultiplicatorPadawan(); break;
            case 9: numberAdditionPadawan(); break;
            case 10: numberSubtractionPadawan(); break;
            case 11: numberDivisionPadawan(); break;

            }
        }
        else
        {
            /*
            Simply returns the user to the main menu if an invalid selection is made
            */
            cout << "Invalid Selection. Returning to main. ";
            getMainGreeting();
        }
    }
    
}

/*
This function prints out a a message if the user scores 75 or better
on their trial. It also prints out a different message if the user
scores less than 75 percent.
*/
float mulTiply::getFinished(float right, float wrong)
{
    
   // cout << "number right: " << right << " \n" << endl;
   // cout << "number wrong: " << wrong << " \n" << endl;
   // cout << "doubleCheck " << setprecision(4) << fixed << doubleCheck << "\n";
    check = right + wrong;
    doubleCheck = right / check;
  //  cout << "doubleCheck " << setprecision(4) << fixed << doubleCheck << "\n";
    if (right + wrong == 10 )
    {
        if (.75 > doubleCheck)
        {
            cout << "Below passing percent\n";
            cout << check;
            getCommentWrong();
            cout << "You are not ready for the Jedi Trials. Speak with your Master.\n\n";
            getReset();
        }
        
        else 
        {
            cout << "Above passing percent\n";
            cout << check;
            getCommentRight();
            cout << "You are ready padawan. Speak with you master.\n\n";
            getReset();
        }
    }
    
    return 0;
}

/*
This function is called to reset the program after ten tries so that 
a new user can give the ol' math a shot.
*/
void mulTiply::getReset()
{
    counter = 0;
    right = 0.0f;
    wrong = 0.0f;
    check = 0.0f;
    doubleCheck = 0.0f;
    getMainGreeting();
    
    
}
