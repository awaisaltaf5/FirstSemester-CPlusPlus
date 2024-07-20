#include <iostream>
#include <string>

using namespace std;

const int MAX_ACCOUNTS = 100;

struct BankAccount {
    string accountHolderName;
    int accountNumber;
    float balance;
    string accountType; // e.g., "Savings", "Checking"
    float interestRate; // applicable only for Savings accounts
};

BankAccount accounts[MAX_ACCOUNTS];
int accountCount = 0;
int nextAccountNumber = 1;

//This fuction is use to create an account
void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        cout<< "Maximum number of accounts reached. Cannot create a new account." << endl;
        return;
    }
    
    BankAccount &account = accounts[accountCount++];
    account.accountNumber = nextAccountNumber++;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, account.accountHolderName);
    cout << "Enter Account Type (Savings/Checking): ";
    cin >> account.accountType;
    cout << "Enter Initial Balance: ";
    cin >> account.balance;

    if (account.accountType == "Savings") {
        cout << "Enter Interest Rate (%): ";
        cin >> account.interestRate;
    } else {
        account.interestRate = 0.0;
    }

    cout << "Account created successfully! Account Number: " << account.accountNumber << endl;
}

//This function is use to view the account details
void viewAccountDetails(int accountNumber) {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            cout << "Account Number: " << accounts[i].accountNumber << endl;
            cout << "Account Holder Name: " << accounts[i].accountHolderName << endl;
            cout << "Account Type: " << accounts[i].accountType << endl;
            cout << "Balance: " << accounts[i].balance << endl;
            if (accounts[i].accountType == "Savings") {
                cout << "Interest Rate: " << accounts[i].interestRate << "%" << endl;
            }
            return;
        }
    }
    cout << "Account not found!" << endl;
}

//This function is use to deposit money from account
void deposit(int accountNumber, float amount) {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            accounts[i].balance += amount;
            cout << "Deposit successful! New Balance: " << accounts[i].balance << endl;
            return;
        }
    }
    cout << "Account not found!" << endl;
}

//This function is use to withdraw money from account
void withdraw(int accountNumber, float amount) {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                cout << "Withdrawal successful! New Balance: " << accounts[i].balance << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
            return;
        }
    }
    cout << "Account not found!" << endl;
}

//This function is use to transfer the money from one account to another account
void transfer(int fromAccountNumber, int toAccountNumber, float amount) {
    BankAccount* fromAccount = nullptr;
    BankAccount* toAccount = nullptr;

    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == fromAccountNumber) {
            fromAccount = &accounts[i];
        }
        if (accounts[i].accountNumber == toAccountNumber) {
            toAccount = &accounts[i];
        }
    }

    if (fromAccount && toAccount) {
        if (fromAccount->balance >= amount) {
            fromAccount->balance -= amount;
            toAccount->balance += amount;
            cout << "Transfer successful!" << endl;
        } else {
            cout << "Insufficient balance in the source account!" << endl;
        }
    } else {
        cout << "One or both accounts not found!" << endl;
    }
}

//This account is use to view all accounts
void viewAllAccounts() {
    for (int i = 0; i < accountCount; ++i) {
        cout << "Account Number: " << accounts[i].accountNumber << endl;
        cout << "Account Holder Name: " << accounts[i].accountHolderName << endl;
        cout << "Account Type: " << accounts[i].accountType << endl;
        cout << "Balance: " << accounts[i].balance << endl;
        if (accounts[i].accountType == "Savings") {
            cout << "Interest Rate: " << accounts[i].interestRate << "%" << endl;
        }
        cout << "-----------------------------" << endl;
    }
}

//This function is use to calculate the interset rate on money
void calculateInterest() {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountType == "Savings") {
            float interest = accounts[i].balance * (accounts[i].interestRate / 100);
            accounts[i].balance += interest;
            cout << "Interest added for Account Number: " << accounts[i].accountNumber << ", New Balance: " << accounts[i].balance << endl;
        }
    }
}

//This function is use to close the specific account
void closeAccount(int accountNumber) {
    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            for (int j = i; j < accountCount - 1; ++j) {
                accounts[j] = accounts[j + 1];
            }
            --accountCount;
            cout << "Account closed successfully!" << endl;
            return;
        }
    }
    cout << "Account not found!" << endl;
}

//This is a main function
int main() {
    int choice;
    do {
        cout << "\nBanking System Menu:" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. View account details" << endl;
        cout << "3. Deposit money" << endl;
        cout << "4. Withdraw money" << endl;
        cout << "5. Transfer money between accounts" << endl;
        cout << "6. View all accounts" << endl;
        cout << "7. Calculate interest for Savings accounts" << endl;
        cout << "8. Close an account" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2: {
                int accountNumber;
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                viewAccountDetails(accountNumber);
                break;
            }
            case 3: {
                int accountNumber;
                float amount;
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                deposit(accountNumber, amount);
                break;
            }
            case 4: {
                int accountNumber;
                float amount;
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                withdraw(accountNumber, amount);
                break;
            }
            case 5: {
                int fromAccountNumber, toAccountNumber;
                float amount;
                cout << "Enter Source Account Number: ";
                cin >> fromAccountNumber;
                cout << "Enter Destination Account Number: ";
                cin >> toAccountNumber;
                cout << "Enter Amount to Transfer: ";
                cin >> amount;
                transfer(fromAccountNumber, toAccountNumber, amount);
                break;
            }
            case 6:
                viewAllAccounts();
                break;
            case 7:
                calculateInterest();
                break;
            case 8: {
                int accountNumber;
                cout << "Enter Account Number: ";
                cin >> accountNumber;
                closeAccount(accountNumber);
                break;
            }
            case 9:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}
