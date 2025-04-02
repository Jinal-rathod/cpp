#include <iostream>
using namespace std;

class bank
{
private:
    string name;
    int account_no;
    int balance;

public:
    bank(string name, int account_no, int balance)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
    }
    void check_balance()
    {
        cout << balance << endl;
    }
    void deposit(int amount)
    {
        this->balance += amount;
    }
    void withdraw(int amount)
    {
        if (canwithdraw(amount))
        {
            this->balance -= amount;
            cout << "withdraw" << endl;
        }
        else
        {
            cout << "can't withdraw" << endl;
        }
    }

private:
    bool(canwithdraw(int amount))
    {
        if (this->balance >= amount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    bank b("harsh", 12345, 5421);
    b.check_balance();
    b.deposit(1000);
    b.check_balance();
    b.withdraw(421);
    b.check_balance();
    return 0;
}
