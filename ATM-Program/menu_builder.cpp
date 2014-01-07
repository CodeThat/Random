#include <iostream>
#include "menu_builder.h"

// initializes the account balance
void MenuBuilder :: SetAccountBalance()
{
	accountBalance = 2439.45;
}

// displays the list of options to the user
void MenuBuilder :: DisplayMenu()
{
	cout << endl;
	cout << "Welcome to the Demux Bank Automated Teller Machine\n";
	cout << "    1. Check balance\n";
	cout << "    2. Make withdrawal\n";
	cout << "    3. Make deposit\n";
	cout << "    4. View account information\n";
	cout << "    5. View statement\n";
	cout << "    6. View bank information\n";
	cout << "    7. Exit\n";
	cout << "Enter your option[1-7]: ";
}

// shows the account balance
void MenuBuilder :: ShowAccountBalance()
{
	cout << "\n    Current balance is $"
		 << fixed << setprecision(2) << accountBalance << "\n";
}

// withdraws the amount from the account
void MenuBuilder :: WithdrawAmount()
{
	double withdrawalAmount;

	cout << "\n    How much would you like to withdraw? $";
	cin >> withdrawalAmount;
	accountBalance = accountBalance - withdrawalAmount;
}

// Deposits the money into the account
void MenuBuilder :: DepositAmount()
{
	double depositAmount;

	cout << "\n    How much would you like to deposit? $";
	cin >> depositAmount;
	accountBalance = accountBalance + depositAmount;
}

// displays account information
void MenuBuilder :: DisplayAccountInformation()
{
	cout << "    Name: Michael Anderson\n";
	cout << "    Account Number: 1234554321\n";
}

// displays the account statement
void MenuBuilder :: ViewStatement()
{
	cout << "\n    01/01/11 - McDonald's - $6.27";
	cout << "\n    01/15/11 - Kwik Trip - $34.93";
	cout << "\n    02/28/11 - Target - $124.21\n";
}

// displays bank information
void MenuBuilder :: ViewBankInformation()
{
	cout << "\n    Demux Bank, established 2011";
	cout << "\n    (123) 456-7890";
	cout << "\n    12345 1st St.";
	cout << "\n    Someplace, NJ 12345\n";
}
