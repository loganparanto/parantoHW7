// bankAccount.cpp
#include <string>

class BankAccount {
	private:
		std::string customerName;
		float balance;

	public:
		BankAccount(std::string n, float bal);
		std::string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		~BankAccount();
};

BankAccount::BankAccount(std::string n, float bal) : customerName(n), balance(bal) {}

std::string BankAccount::getName() {
	return customerName;
}

float BankAccount::getBalance() {
	return balance;
}

void BankAccount::deposit(float dep) {
	balance += dep;
}

void BankAccount::withdraw(float draw) {
	if (draw <= balance) {
		balance -= draw;
	}
}

BankAccount::~BankAccount() {}

