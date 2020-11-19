/* Alexander Mendez 11-15-20
	Dr_T COSC 1437-58003
	Unit 4 - More Object-Oriented Coding Practice	
	repl.it */

#include <iostream>
#include <string>
#include "Input_Validation_Extended.h"
#include "classes.h" // includes Team class and Scoreboard Class

using namespace std;


int main() 
{
	Scoreboard s;  // initialize variable with Scoreboard datatype
	Team teamOne;  // initialize two variables with Team datatype
	Team teamTwo;

	string newName = "";
	string userChoice = "";
	int newScore = 0;
	int newQtr = 0;
	int newDowns = 0;
	int newToGo = 0;

	teamOne.setHomeStatus(true);

	s.setHome(teamOne);
	s.setVisitor(teamTwo);

	do{
		s.showScoreboard(); // display scoreboard with all parameters from classes.h

		// menu for changing the scoreboard
		cout << "\nA = Update Team Names" << endl; 
    cout << "B = Update Team Scores" << endl; 
		cout << "C = Update Quarter" << endl; 
    cout << "D = Update Downs" << endl;
		cout << "E = Update Yards To Go" << endl;
    cout << "X = Exit" << endl;
    cout << "> "; 
    userChoice = validateString(userChoice);

		if(userChoice == "A" || userChoice == "a")
    {
        cout << "\nUPDATING NAMES " << endl; 
				cout << "Choose a team" << endl;
				cout <<  "A = Team One :: B = Team Two " << endl;
				cout << "> "; 
				userChoice = validateString(userChoice);


				if(userChoice == "A" || userChoice == "a")
				{
					cout << "\nUPDATING TEAM NAMES" << endl;
					cout << "A = Update Team Names" << endl; 
    			cout << "B = Update Home City" << endl; 
					cout << "C = Update Coach Name" << endl; 
					cout << "> "; 
					userChoice = validateString(userChoice);
					
					if(userChoice == "A" || userChoice == "a")
					{
						cout << "\nUPDATING TEAM ONE NAME" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamOne.setName(newName);
					}
					else if(userChoice == "B" || userChoice == "b")
					{
						cout << "\nUPDATING HOME CITY" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamOne.setHomeCity(newName);
					}
					else if(userChoice == "C" || userChoice == "c")
					{
						cout << "\nUPDATING Coach Name" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamOne.setCoachName(newName);
					}
					else
					{
						cout << "Invalid Input. Try Again\n" << endl ;
					}
				}


				else if(userChoice == "B" || userChoice == "b")
				{
					cout << "\nUPDATING TEAM TWO" << endl;
					cout << "A = Update Team Names" << endl; 
    			cout << "B = Update Home City" << endl; 
					cout << "C = Update Coach Name" << endl; 
					cout << "> "; 
					userChoice = validateString(userChoice);

					
					if(userChoice == "A" || userChoice == "a")
					{
						cout << "\nUPDATING TEAM TWO NAME" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamTwo.setName(newName);
					}
					else if(userChoice == "B" || userChoice == "b")
					{
						cout << "\nUPDATING HOME CITY" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamTwo.setHomeCity(newName);
					}
					else if(userChoice == "C" || userChoice == "c")
					{
						cout << "\nUPDATING COACH NAME" << endl;
						cout << "Input new name > " << endl;
						newName = validateString(newName);

						teamTwo.setCoachName(newName);
					}
					else
					{
						cout << "Invalid Input. Try Again\n" << endl ;
					}
				}
    } 
		else if(userChoice == "B" || userChoice == "b")
		{
			cout << "\nUPDATING SCORES " << endl; 
			cout << "Choose a team" << endl;
			cout <<  "A = Team One :: B = Team Two " << endl;
			cout << "> "; 
			userChoice = validateString(userChoice);

			if(userChoice == "A" || userChoice == "a")
			{
				cout << "Enter the new Score for " << teamOne.getName() << "> ";
				newScore = validateInt(newScore);
				teamOne.setScore(newScore);
			}
			else if(userChoice == "B" || userChoice == "b")
			{
				cout << "Enter the new Score for " << teamTwo.getName() << "> ";
				newScore = validateInt(newScore);
				teamTwo.setScore(newScore);
			}
			else
			{
				cout << "Invalid Input. Try Again\n" << endl ;
			}
		}
		
		else if(userChoice == "C" || userChoice == "c")
		{
			cout << "\nUPDATE QUARTER" << endl;
			cout << "Enter quarter" << endl;
			cout << "> "; 
			newQtr = validateInt(newQtr);
			s.setQTR(newQtr);

		}

		else if(userChoice == "D" || userChoice == "d")
		{
			cout << "\nUPDATE DOWNS" << endl;
			cout << "Enter downs" << endl;
			cout << "> "; 
			newDowns = validateInt(newDowns);
			s.setDown(newDowns);

		}

		else if(userChoice == "E" || userChoice == "e")
		{
			cout << "\nUPDATE YARDS TO GO" << endl;
			cout << "Enter Yards To Go" << endl;
			cout << "> "; 
			newToGo = validateInt(newToGo);
			s.setToGo(newToGo);
		}
		else
		{
			cout << "Invalid Input. Try Again\n" << endl ;
		}

		s.setHome(teamOne); // update scoreboard with new values for team
		s.setVisitor(teamTwo); // update scoreboard with new values for team
	}while(userChoice != "X" && userChoice != "x");

	return 0;
}