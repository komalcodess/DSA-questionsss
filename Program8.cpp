#include <iostream>
#include <string>

using namespace std;
class bank{
string name;
int accNo;
string type;
float balance;

public:
    void setDetails(){
       cout<<"Enter the name of the account holder:";
       cin>>name;
       cout<<"Enter the accNo:";
       cin>>accNo;
       cout<<"enter the type of account:";
       cin>>type;
       cout<<"Enter the balance:";
       cin>>balance;
    }
    void deposit(){
    float depo;
    cout<<"Enter the amount to deposit:";
    cin>>depo;
    balance=balance + depo;
    cout<<"The balance now is:"<< balance<<endl;
    }

    void withdraw(){
    float with;
    cout<<"Enter the amount you want to withdraw:";
    cin>>with;
    if(with>balance)
        cout<<"Not enough balance"<<endl;
    else {
        balance =balance-with;
       cout<<"The balance now is:"<<balance<<endl;
    }

    }
    void display(){
    cout<<"The name of the acc holder is:"<<name<<endl;
    cout<<"The balance is:"<<balance<<endl;
    }

};
int main()
{
    bank s1;
    s1.setDetails();
    int choice;
    while(1){
        cout<<"Enter 1 to deposit"<<endl;
        cout<<"enter 2 to withdraw"<<endl;
        cout<<"Enter 3 to check the balance and name"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cout<<"Enter the choice:";
        cin>>choice;
        switch(choice){
    case 1:
        s1.deposit();
        break;
    case 2:
        s1.withdraw();
        break;
    case 3:
        s1.display();
        break;
    case 4:
        return 0;
    default:
        cout<<"Invalid choice";
        }
    }
}
