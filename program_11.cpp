#include <iostream>

using namespace std;
class TollBooth{
unsigned int numOfCars;
double money;

public:

TollBooth()
{
    numOfCars = 0;
    money = 0.0;
}

void payingCar()
{
    numOfCars++;
    money=money+0.5;
}

void nonPayCar() 
{
    numOfCars++;

}

void display()
    {
        cout << "Total cars: " <<  numOfCars << endl;
        cout << "Total cash: " << money<<" rupees"<< endl;
    }
};

int main()
{
TollBooth t1;
char ch;
cout<<"Enter p for paying cars\n";
cout<<"Enter n for non-paying cars\n";
cout << "Press e to display total\n";

while(1)
{
    cin>>ch;

    if(ch=='p' || ch=='P')
    {
        t1.payingCar();
    }
    else if(ch=='n' || ch=='N')
    {
        t1.nonPayCar();
    }
    else if(ch=='e' || ch=='E')
    {
        t1.display();
        break;
    }
}

}