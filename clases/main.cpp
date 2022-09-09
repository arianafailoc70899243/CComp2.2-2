#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
   

    cout << "account1: " << account1.getName() << " balance is $" <<
            account1.getBalance();
   

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance.";
    account1.deposit(depositAmount);

        
    cout << "\n\nEnter deposit amount for account2: ";    
    cin >> depositAmount;

    
    cout << "\n\naccount1: " << account1.getName() << " balance is $" <<
            account1.getBalance();
    

    cout<<" Ingrese la cantidad de retiro: ";
        int withdrawing;
    cin >>withdrawing;
    cout<<"withdrawing"<<withdrawing<<"to account1 withdrawl  balance. ";
    account1. withdrawl(withdrawing);
    
    cout << "\n\naccount1: " << account1.getName() << " balance is $" <<
            account1.getBalance();



    

    return 0;
}