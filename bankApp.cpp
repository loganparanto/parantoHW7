//bankApp.cpp
#include "bankAccount.cpp"
#include <iostream>
#include <ostream>

int main() {
	BankAccount jackAccount("Jack Smith", 50.0);
	BankAccount jillAccount("Jill Brian", 100.0);

	BankAccount bankArray[3] = {
		BankAccount("Ralph Kramden", 10.0),
		BankAccount("Alice Kramden", 20.0),
		BankAccount("Ed Norton", 30.0)
	};

	float depositAmount = 30.0;
	float withdrawAmount = 20.0;

	jackAccount.deposit(depositAmount);
	jillAccount.deposit(depositAmount);

	for (int i = 0; i < 3; i++) {
		bankArray[i].deposit(depositAmount);
		bankArray[i].withdraw(withdrawAmount);
	}

	std::cout << "Account Details:" << std::endl;
	std::cout << "Jack's Account: " << jackAccount.getName() << " - Balance: $" << jackAccount.getBalance() << std::endl;
	std::cout << "Jill's Account: " << jillAccount.getName() << " - Balance: $" << jillAccount.getBalance() << std::endl;

	for (int i = 0; i < 3; i++) {
		std::cout << "Account " << i + 1 << ": " << bankArray[i].getName() << " - Balance: $" << bankArray[i].getBalance() << std::endl;
	}

	return 0;
}
