// MenuBuilder.h

#include <iostream>
#include <iomanip>

using namespace std;

class MenuBuilder
{
   private:

	double accountBalance;

   public:

	// initializes the account balance
	void SetAccountBalance();

	// displays the list of options to the user
	void DisplayMenu();

	// shows the account balance
	void ShowAccountBalance();

	// withdraws the amount from the account
	void WithdrawAmount();

	// deposits the money into the account
	void DepositAmount();

	// displays account information
	void DisplayAccountInformation();

	// displays the account statement
	void ViewStatement();

	// displays bank information
	void ViewBankInformation();

};
