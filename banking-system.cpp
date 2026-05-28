#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 0, deposit, withdraw;

    cout << "====== BANKING SYSTEM ======\n";

    do {
        cout << "\n1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter deposit amount: ";
                cin >> deposit;

                balance += deposit;

                cout << "Amount Deposited Successfully!\n";
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> withdraw;

                if(withdraw > balance) {
                    cout << "Insufficient Balance!\n";
                }
                else {
                    balance -= withdraw;
                    cout << "Withdrawal Successful!\n";
                }

                break;

            case 3:
                cout << "Current Balance = Rs." << balance << endl;
                break;

            case 4:
                cout << "Thank You for Using Banking System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}