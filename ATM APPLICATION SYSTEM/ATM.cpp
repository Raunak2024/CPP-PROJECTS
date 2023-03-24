#include <iostream>
using namespace std;

int main() {
    int balance = 5000, withdraw, deposit;
    int option;
    cout << "***** Welcome to XYZ Bank ATM *****" << endl;
    cout << "\n";
    cout << "1) Check Balance" << endl;
    cout << "2) Withdraw Cash" << endl;
    cout << "3) Deposit Cash" << endl;
    cout << "4) Quit" << endl;
    cout << "\n";
    cout << "Enter your option: ";
    cin >> option;
    switch(option) {
        case 1:
            cout << "Your balance is " << balance << " USD" << endl;
            break;
        case 2:
            cout << "Enter the amount to withdraw: ";
            cin >> withdraw;
            if(withdraw <= balance) {
                balance -= withdraw;
                cout << "Please collect your cash" << endl;
                cout << "Your remaining balance is " << balance << " USD" << endl;
            }
            else {
                cout << "Insufficient balance" << endl;
            }
            break;
        case 3:
            cout << "Enter the amount to deposit: ";
            cin >> deposit;
            balance += deposit;
            cout << "Your new balance is " << balance << " USD" << endl;
            break;
        case 4:
            cout << "Thank you for using XYZ Bank ATM" << endl;
            break;
        default:
            cout << "Invalid option selected" << endl;
    }
    return 0;
}
