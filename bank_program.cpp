#include<bits/stdc++.h>
using namespace std;



class Bank 
{
    private:
            //string name;
            char name[30];
            char Accname[20];
            char type[20];
            int ibalance;
            int dop;
            int with;
    public:
             void menu(void);
             void get(void);
             void deposite(void);
             void check(void);
             void withdraw(void);
             void info(void);        
};
void Bank::get()
{
    int go;
    cout << "\n\t\tEnter Name:";
    cin >> name;
    //getline(cin,name);
    cout << "\n";
    cout << "\t\tEnter Account Name:";
    cin >> Accname;
    cout << "\n";
    cout << "\t\tEnter the Type of Acoount: ";
    cin >> type;
    cout << "\n";
    cout << "\t\tHow much money do you want to deposite?";
    cout << "\t\t";
    cin >> ibalance;

    cout << "\t\tHit \'0\' to GO TO MAIN MENU: ";
    cout << "\n";
    cin >> go;
    if(go==0)
    {
        menu();
    }

    

}

void Bank::menu()
{
    int me;
    cout << "\t\nChoose Your Option for 1-to-6\n";
    cout << "\t1. Create a New Acoount\n";
    cout << "\t2. Deposite Your Money\n";
    cout << "\t3. Check Your Balance\n";
    cout << "\t4. Withdraw Amount\n";
    cout << "\t5. Your Account's All Information\n";
    cout << "\t6.EXIT";
    cout << "\n\t\t";
    cin >> me;
    switch(me)
    {
        case 1:
               get();
               break;
        case 2:
               deposite();       
                break;
        case 3:
               check();
               break;
        case 4:
                withdraw();
                break; 
        case 5:
                info();
                break;
        case 6:
                break;
        default:
                break;               
    }
}
void Bank::deposite()
{
    int go;
    cout << "\t\tHow much money do you want to deposite?"; 
    cout  << "\t\t";
    cin >> dop;
    dop += ibalance;
    cout << "\t\tHit \'0\' to GO TO MAIN MENU: ";
    cout << "\n";
    cin >> go;
    if (go == 0)
    {
        menu();
    }
}
void Bank::check()
{
    int go;
    cout << "\t\tYour Current Balance: " << dop << "\n";
    cout << "\t\tHit \'0\' to GO TO MAIN MENU: ";
    cout << "\n";
    cin >> go;
    if (go == 0)
    {
        menu();
    }
}
void Bank::withdraw()
{
    int go;
    cout << "\n\t\tHow much Money do you want to Withdraw?\n";
    cout << "\t\t";
    cin >> with;
    dop -= with;
    cout << "After Withdrawing Your Balance:" << dop << "\n\t";
    cout << "\t\tHit \'0\' to GO TO MAIN MENU: ";
    cout << "\n";
    cin >> go;
    if (go == 0)
    {
        menu();
    }
}
void Bank::info()
{
    int go;
    cout << "\n\t\tName of the Depositor: " << name << "\n";
    cout << "\t\tName of the Account: " << Accname << "\n";
    cout << "\t\t Type of Account: " << type << "\n";
    cout << "\t\tAmount in your Account: " << dop << "\n";
    cout << "\t\tHit \'0\' to GO TO MAIN MENU: ";
    cout << "\n";
    cin >> go;
    if (go == 0)
    {
        menu();
    }
}
int main()
{
    Bank obj;
    obj.menu();
    getchar();
    return 0;
}