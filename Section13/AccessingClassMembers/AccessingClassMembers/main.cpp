#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;

public:
	void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
	bool is_dead();

};

class Account
{
public:
	string name;
	double balance;

public: 
	void set_balance(double bal) { 
		balance = bal; 
	}
	double get_balance() { return balance; }

	void set_name(string n);
	string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

};

void Account::set_name(string n)
{
	name = n;
}

void set_name(string n)
{

}

bool Account::deposit(double amount)
{

	//some logic business

	balance += amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if (balance - amount >= 0)
	{
		balance -= amount;
		return true; 
	}
	else
	{
		return false;
	}
}

int main()
{
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000);

	if (frank_account.deposit(200.00))
		cout << "Deposit OK" << endl;
	else
		cout << "Deposit Not allowed" << endl;

	if (frank_account.withdraw(500))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not sufficient funds" << endl;

	if (frank_account.withdraw(1500.0))
		cout << "Withdraw OK" << endl;
	else
		cout << "Not sufficient funds" << endl;

	return 0;
}