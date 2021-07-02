#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class BankAccount
{
    int acc_no;
    string hol_name,type;
    double curr_balance,min_balance;

public:
    BankAccount(int acc_noi,string hol_namei,string typei, double curr_balancei, double min_balancei)
        : acc_no(acc_noi), hol_name(hol_namei), type(typei), curr_balance(curr_balancei), min_balance(min_balancei){}
    BankAccount()
    {
        int n;
        cout << "Account Number:";
        cin >> n;
        acc_no=n;
        cout << "Account Holder Name: ";
        cin >> hol_name;
        cout << "Account Type:";
        cin >> type;
        cout << "Current Balance:";
        cin >> n;
        curr_balance=n;
        cout << "Minimum Balance:";
        cin >> n;
        min_balance=n;
    }
    void showBalance(){
        cout << curr_balance << endl;
    }
    void deposit(double _deposit){
        if(_deposit<=0){
            cout << "Deposit amount MUST be greater than 0!" << endl;
        }
        else
            curr_balance=curr_balance+_deposit;
    }

    void withdrawal(double _withdraw){
        if(curr_balance-_withdraw>min_balance){
            cout << "Cannot withdraw this amount! Try again." << endl;
        }
        else
            curr_balance=curr_balance-_withdraw;
    }

    double giveInterest(double rate = 0.03){
        double interest= curr_balance * rate;
        deposit(interest*0.9);
    }

     void display(){
        cout << "Account Number :" << acc_no << endl;
        cout << "Account Holder Name :" << hol_name << endl;
        cout << "Account Type :" << type << endl;
        cout << "Current Balance :" << curr_balance << endl;
    }
    ~BankAccount()
    {
        cout << "Account of " << hol_name << " with account no " << acc_no << " is destroyed with a balance BDT " << curr_balance << endl;
    }
};

int main()
{
    BankAccount acc1;
    acc1.deposit(100);
    acc1.showBalance();
    acc1.withdrawal(2000);
    acc1.showBalance();
    acc1.giveInterest();
    acc1.giveInterest(0.05);
    acc1.withdrawal(600);

    return 0;
}
