#include <iostream>
using namespace std;

class bank
{
    string name;
    int ano;
    string atype;
    float bal;

public:
    void get(int no, string n, string t, float b)
    {
        name = n;
        ano = no;
        atype = t;
        bal = b;
    }
    float deposit()
    {
        float amt;
        cout << "Enter the amount to be deposit: ";
        cin >> amt;
        bal = bal + amt;
        return bal;
    }
    float withdrw()
    {
        if (bal <= 0)
            cout << "could'nt Withdrw Money due to low balance";
        float amt;
        cout <<"How many Rupees withdraw: ";
        cin >> amt;
        bal = bal - amt;
        return bal;
    }
    void disp_details()
    {
        cout << endl
             << "DISPLAY  BANK DETAILS" << endl;
        cout << "Account number: " << ano << endl;
        cout << "Name: " << name << endl;
        cout << "Account type: " << atype << endl;
        cout <<endl << "DEPOSITING AN AMOUNT" << endl;
        cout <<  "Deposit Amount: " << deposit() << endl;
        cout << endl<< "WITHDRAW MONEY" << endl;
        cout << "After Withdraw Amount balnace: " << withdrw() << endl;
    }
};

int main()
{
    int n;
    string nm, type;
    float amt;
    bank bk;
    cout << "ENTER THE BANK DETAILS: " << endl;
    cout << "Enter Account no.: ";
    cin >> n;
    cout << "Enter Name: ";
    cin >> nm;
    cout << "Enter account type (Savings/Current): ";
    cin >> type;
    cout << "Enter balance amount: ";
    cin >> amt;
    bk.get(n, nm, type, amt);
    bk.disp_details();
}
