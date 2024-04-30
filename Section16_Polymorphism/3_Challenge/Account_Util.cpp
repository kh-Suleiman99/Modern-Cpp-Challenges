#include <iostream>
#include "Account_Util.h"


/**
 * @brief Displays Account objects
 * 
 * @param accounts : vector of pointers to Account objects 
 */
void display(const std::vector<Account *> &accounts) {
    std::cout << "\n=== Accounts===========================================" << std::endl;
    for (const auto acc: accounts) 
        std::cout << *acc << std::endl;
}


/**
 * @brief Deposits supplied amount to each Account object in the vector.
 * 
 * @param accounts : vector of pointers to Account objects.
 * @param amount : The amount that I want to deposit.
 */
void deposit(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto acc:accounts)  {
        if (acc->deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}


/**
 * @brief Withdraw amount from each Account object in the vector
 * 
 * @param accounts : vector of pointers to Account objects 
 * @param amount : The amount that I want to withdraw
 */
void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto acc:accounts)  {
        if (acc->withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}
