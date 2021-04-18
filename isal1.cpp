#include <iostream>
using namespace std;

// class
class Bank {
private:
    int acno;
    char name[30];
    long balance;

public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

// main code
int main()
{
    int found = 0, a, ch, i;
    int n = 100;
    Bank C[n];



    do {
        // display options
        cout << "\n\n1:Register Account\n2:Display All\n3:By Account No\n4:Deposit\n5:Withdraw\n6:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
        {
            i = 0;
            C[i].OpenAccount();
            i++;
        }
        case 2: // displating account info
            for (i = 0; i <= 2; i++) {
                C[i].ShowAccount();
            }
            break;
        case 3: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 6: // exit
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Input" << endl;
        }
    } while (ch != 5);
    return 0;
}