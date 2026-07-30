#include<iostream>
#include<iomanip>
void showbalance(double balance)
{
    std::cout << "Balance: rs " << std::fixed << std::setprecision(2) << balance << std::endl;
}
double deposit()
{
    double amount;
    std::cout << "Enter deposit amount: ";
    std::cin >> amount;
    if (amount < 0) {
        std::cout << "Deposit amount cannot be negative. Please try again.\n";
        return 0.0;
    }
    else if (amount > 10000) {
        std::cout << "Deposit amount exceeds the limit of rs10000. Please try again.\n";
        return 0.0;
    }
    else {
        std::cout << "Deposit successful.\n";
        return amount;
    }
    
}
double withdraw(double balance){
    
    double amount;
    std::cout << "Enter withdrawal amount: ";
    std::cin >> amount;
    if(amount < 0) {
        std::cout << "Withdrawal amount cannot be negative. Please try again.\n";
        return 0.0;
    }
    else if (amount > 5000) {
        std::cout << "Withdrawal amount exceeds the limit of rs5000. Please try again.\n";
        return 0.0;
    }
    else if (amount > balance) {
        std::cout << "Insufficient balance. Please try again.\n";
        return 0.0;
    }
    else {
        std::cout << "Withdrawal successful.\n";
        return amount;
    }
    
}

int main()
{
    double balance = 0.0;
    int choice;
    do {
        std::cout << "1. Show Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}