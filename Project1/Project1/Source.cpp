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
		_getch();
		cout << '\n';
}

// MAIN
void main() {
	//variables
	int	age; // How many years have you been living?
	char  racial_background; // what is the first letter of your race?
	double money; // how many Ms do you have in your bank account?
	double myBankAccount = 8; // 8
	bool you_gots_no_Ms; // Do you have more mney than me?

	// User Queries 
	cout << "How many years have you been living?";
	cin >> age;
	cout << "What is your race?";
	cin >> racial_background;
	cout << "how many Ms do you have in your bank account?";
	cin >> money ;
	you_gots_no_Ms = money > myBankAccount;

	// After questions print out stored data
	cout << "wow you're " << age << " I thought you were... younger" << endl; //ENDL
	cout << "your race was: " << racial_background << " well, i am a asian. \n";
	cout << "you only have: " << money << " . i have " << myBankAccount << " Ms in my bank account" << "\n";
	if (you_gots_no_Ms) {
		cout << "What is your account number :";
	}
	pause();
}