#include <iostream>
using namespace std;
//I write this code very simple by using clases
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void checkBalance() {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accNo;
    double balance;

    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount account(name, accNo, balance);

    int choice;
    do {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            account.deposit(amt);
        } else if (choice == 2) {
            double amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            account.withdraw(amt);
        } else if (choice == 3) {
            account.checkBalance();
        } else if (choice == 4) {
            cout << "Exiting program" << endl;
        } else {
            cout << "the choice is Invalid ! please Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}