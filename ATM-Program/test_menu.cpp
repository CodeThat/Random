#include "MenuBuilder.h"

int main()
{
   MenuBuilder AccountMenu;
   AccountMenu.SetAccountBalance();
   int SelectedOption;

   do
   {
	AccountMenu.DisplayMenu();
	cin >> SelectedOption;

	switch ( SelectedOption )
	{
	   case 1: // show account balance
		AccountMenu.ShowAccountBalance();
		break;

	   case 2: // withdraw amount
		AccountMenu.WithdrawAmount();
		break;

	   case 3: // deposit amount
		AccountMenu.DepositAmount();
		break;

	   case 4: // display account details
		AccountMenu.DisplayAccountInformation();
		break;

	   case 5: // display statement
		AccountMenu.ViewStatement();
		break;

	   case 6: // display bank details
		AccountMenu.ViewBankInformation();
		break;

	   case 7: // user wants to quit
		break;


	}

   } while ( SelectedOption != 7 );

   return 0;
}
