#include <iostream>
#include <cstdlib>
#include <ctime>
 
const char RABBIT = 'r';
const char WALL = 'w';
const char GUN = 'g';

char again;
 
using namespace std;

char getComputerOption() {
    srand(time(0));
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'w';
    if(num==3) return 'g';
}

char getUserOption() {
    char c;
    cout << "RABBIT, WALL, GUN" << "\n\n";
    cout << "How to play:\n";
    cout << "Choose one of the following options"  << "\n";
    cout << "-----------------------------------"  << "\n";
    cout << "(r) for rabbit " << "\n" << "(w) for wall" << "\n" << "(g) for gun " << "\n\n";
    cout << "Mechanics:\n" << "Rabbit jumps over a wall.\n" << "Wall survives the gun.\n" << "Gun kills the rabbit.\n\n";
    cout << "Your choice: ";
    
    cin >> c;
    
    while (c!='r' && c!='w' && c!='g' )
    {
        cout << "\nPlease enter one of the following options only. " << "\n";
        cout << "(r) for rabbit " << "\n" << "(w) for wall" << "\n" << "(g) for gun " << "\n\n";
        
        cin >> c;
    }
 
    return c;
}
 
void showSelectedOption(char option) {
    if (option == 'r') cout << "Rabbit" << "\n";
    if (option == 'w') cout << "Wall" << "\n";
    if (option == 'g') cout << "Gun" << "\n";
}
 
void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == RABBIT && cChoice == WALL) {
        cout << "You Win! Rabbit jumps over a wall."<< "\n";
    }
    else if (uChoice == WALL && cChoice == GUN) {
        cout << "you Win! Wall survives the gun."<< "\n";
        
    }
    else if (uChoice == GUN && cChoice == RABBIT) {
        cout << "You Win! Gun kills the rabbit."<< "\n";
        
    }
    else if (uChoice == RABBIT && cChoice == GUN) {
        cout << "Computer Wins! Gun kills the rabbit."<< "\n";
        
    }
    else if (uChoice == WALL && cChoice == RABBIT) {
        cout << "Computer Wins! Rabbit jumps over a wall."<< "\n";
        
    }
    else if (uChoice == GUN && cChoice == WALL) {
        cout << "Computer Wins! Wall survives the gun."<< "\n";
    }
    else{
        cout << "Tie." << "\n";
    }
}
 
int main() {
	do {
		//User's choice
    	char uChoice; 
    	//Compter's choice
    	char cChoice;
    
    	uChoice = getUserOption();
    	cout << "\nYour choice is: "<< "\n";
    	showSelectedOption(uChoice);
    
    	cout << "Computer's choice is: "<< "\n";
    	cChoice = getComputerOption();
    	showSelectedOption(cChoice);
    
    	chooseWinner(uChoice, cChoice);
    
    	cout << "\nWould you like to play again? (type y to play again.) ";
    	cin >> again;
    	cout << "\n\n\n";
	} while (again == 'y');
    
    return 0;
    
}
    
 
    
