#include <iostream>
using namespace std;
class savingsAccount{

float savingsBalance;
static float annualInterestRate;

public:

savingsAccount(float savingsBalance)
{
    this->savingsBalance=savingsBalance;
}


void calculateMonthlyInterest()
{
    float s;
 s=(savingsBalance*annualInterestRate)/12;
 savingsBalance=savingsBalance   + s;
}


static void modifyInterestRate(float rate){
    annualInterestRate=rate;
}

  void display()
    {
        cout<<"The savings balance is: ";
        cout << savingsBalance << endl;
    }
};

float savingsAccount::annualInterestRate=0;

int main()
{
    savingsAccount saver1(2000), saver2(3000);

    savingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

     cout << "After 4% interest:" << endl;
    cout << "Saver 1: ";
    saver1.display();
    cout << "Saver 2: ";
    saver2.display();

    cout<<endl;

    savingsAccount::modifyInterestRate(0.05);
     saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "After 5% interest:" << endl;
    cout << "Saver 1: ";
    saver1.display();

    cout << "Saver 2: ";
    saver2.display();

}