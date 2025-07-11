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

};


int main(){

}
