#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;        // private — normally no outside access
    string owner;

public:
    BankAccount(string o, int b) { owner = o; balance = b; }

    // declare friend inside class
    friend void showBalance(BankAccount b);
};

// defined OUTSIDE — no :: scope operator needed
void showBalance(BankAccount b) {
    // can directly access private members ✅
    cout << "Owner  : " << b.owner   << endl;
    cout << "Balance: " << b.balance << endl;
}

int main() {
    BankAccount acc("Ravi", 5000);
    showBalance(acc);   // called like normal function, NOT acc.showBalance()
}
