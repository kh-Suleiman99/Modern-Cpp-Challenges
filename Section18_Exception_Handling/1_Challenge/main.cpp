#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"

using namespace std;

int main() {

    try{
        std::unique_ptr<Account> ch = 
            std::make_unique<Savings_Account>(std::string{"khaled"},1000);
        std::cout << *ch << endl;
        ch->withdraw(1001);
        std::cout << *ch << endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr << ex.what() << std::endl;
    }
    catch(const InsufficentFundsException &ex){
        std::cerr << ex.what() << std::endl;
    }
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

