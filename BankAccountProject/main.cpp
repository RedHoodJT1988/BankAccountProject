#include <iostream>
#include "Bank.h"
using namespace std;

int main()
{
	BankAccount account1("Jon");
	BankAccount account2("Sondra", 3000);

	account1.deposit(500);
	cout << "Account1's account contains " << account1.getBalance() << endl;

	account1.withdraw(1000);

	cout << "account1 account is still " << account1.getBalance() << endl;

	cout << account2.getOwner() << "'s account contains "
		<< account2.getBalance() << endl;

	return 0;
}