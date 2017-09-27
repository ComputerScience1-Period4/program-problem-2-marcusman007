/*
Marcus Basta - 9-25 P4
Take In Data
Taking in data
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std; 

// Functions ()
void pause() {
	cout << "Press any key to continue . . . ";
	while (!_kbhit())
		_getch() :
		cout << '\n';
}

// MAIN
void main() {
	//variables
	int	age; // How many years have you been living?
	// void doesn't store value
	char racial_background; // what is your race?
	double money; // how many Ms do you have in your bank account?
	double myBankAccount = 690000000000000000; // $690000000000000000
	bool you_gots_no_Ms;

	// User Queries 
	cout << "How many years have you been living?";
	cin >> age;
	cout << "What is your race?"
	cin >> racial_background;
	cout << "how many Ms do you have in your bank account?"
	cin >> money;
	you_gots_no_Ms = money > myBankAccount; checks to see if you got more money

	// After questions print out stored data
	cout << "wow you're " << age << " I thought you were... younger" << endl; //ENDL
	cout << "your race was" << racial_background << "well, i am a chink"
	cout << "you only have" << money << "i have" << myBankAccount << "Ms in my bank account"
	


//Pause 
pause();
}