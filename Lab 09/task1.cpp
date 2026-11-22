#include <iostream>
using namespace std;

class Account{
    public:
    int accountNumber;
    int balance;
    Account() {
        accountNumber = 0;
        balance = 0;
    }
    Account(int num, int blc) {
        accountNumber = num;
        balance = blc;
    }
    void displayBalance() {
        cout << "The balance of this account is " << balance << endl;
    }

};

class SavingsAccount: public Account {
    public:
    double interestRate;
    SavingsAccount(double i, int num, int blc) : Account(num, blc) {
        interestRate = i;
    }
    SavingsAccount() : Account() {
        interestRate = 0;
    }
    double calculateInterest() {
        return balance * interestRate / 100.0;
    }
};

class FixedDeposit: public SavingsAccount{
    public:
    int maturityPeriod;
    FixedDeposit(int period, int i, int num, int blc) : SavingsAccount(i, num, blc) {
        maturityPeriod = period;
    }
    FixedDeposit() : SavingsAccount() {
        maturityPeriod = 0;
    }
    void mature() {
        cout << "Maturity period completed. Collect your fixed deposit amount.\n";
    }
};
int main() {
    FixedDeposit obj1;
    FixedDeposit obj2(18, 2, 10, 100000);
    obj1.displayBalance();
    obj2.displayBalance();
    cout << "The interest rate of obj1 is " << obj1.calculateInterest() << endl;
    cout << "The interest rate of obj2 is " << obj2.calculateInterest() << endl;
    obj1.mature();
    obj2.mature();

}