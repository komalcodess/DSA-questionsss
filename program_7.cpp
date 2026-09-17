#include <iostream>
using namespace std;
class bankAcc{
string name;
int accno;
string type;
float bal;

public:
void values(string name, int accno, string type, float bal){
this->name=name;
this->accno=accno;
this->type=type;
this->bal=bal;
}

void deposit(float amt)
{
   
    bal=bal+amt;
    cout<<"Balance after deposit is: "<<bal<<endl;

}

void withdraw(float amt){

if(amt>bal)
{
cout<<"Not enough balance!!"<<endl;
cout<<endl;
}
else {
bal=bal-amt;
cout<<"balance after withdrawing is: "<<bal<<endl;
}

}

void display()
{
    cout<<"The name is : "<<name<<endl;
    cout<<"The balance is: "<<bal<<endl;
}
};

int main(){
    bankAcc b1;
    b1.values("komal",1234,"saving",10000.0f);
    b1.deposit(2000.0f);
    b1.withdraw(3000.0f);
    b1.display();
    cout<<endl;
    b1.withdraw(20000.0f);
    b1.display();
}