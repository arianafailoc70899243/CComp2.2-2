#include <string>

class Account {

    public:
        explicit Account(std::string accountName, int initialBalance) 
                : name{accountName} {
            if(initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if(depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        void withdrawl(int withdrawing){
            if(withdrawing <= balance)
                balance = balance-withdrawing;
        }
            else if (withdrawing > balance){}
                cout<<"no puedes retirar esa cantidad porque excediste tu limite"<<endl

            }



        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

    private:
        std::string name;
        int balance{0};
};