#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    void checkBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    string name;
    double initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter initial balance: $";
    cin >> initialBalance;

    BankAccount account(name, initialBalance);

    int choice;
    double amount;
    do {
        cout << "\nBank Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Thank you for banking with us!\nTHE G BANK";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
