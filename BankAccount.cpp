#include <iostream>


using namespace std;

class Account {
private:
    string AccountNumber;
    string AccountName;
    double Balance;
    string Password;
    string Phone;
    string Address;

public:
    Account(string accNum, string accName, double balance,
            string password, string phone, string address){
        if (balance < 0)
            throw invalid_argument("Initial balance is invalid.");

        AccountNumber = accNum;
        AccountName = accName;
        Balance = balance;
        Password = password;
        Phone = phone;
        Address = address;

    }
    void Deposit(double depositAmount)
    {
    	if(depositAmount <= 0)
    	{
    		cout << "Invalid deposit amount" << endl;
		}
		else
		{
			Balance += depositAmount;
			cout << "You have successfully made a deposit of " << depositAmount <<"FCFA" << endl;
			cout << "Your new balance is " << Balance << endl;
		}
	}
	void Withdraw(double withdrawAmount)
	{
		if(withdrawAmount > Balance)
		{
			cout << "Insufficient funds!" << endl;
			return;
		}
		else 
		{
			Balance -= withdrawAmount;
			cout << "You have successfully withdrawn " << withdrawAmount << "FCFA from your account " << endl;
			cout << "Your new balance is " << Balance << endl;
		}
	}

};


int main(){

	Account myAccount("KCB123","Clovis Bin", 100, "12345123", "+237 679695180", "Mvog-Betsi");
	myAccount.Deposit(200);
	myAccount.Withdraw(50);

	
	return 0;
}

