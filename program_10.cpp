#include <iostream>
using namespace std;
class invoice{
string partNumber;
string partDescription;
int quantity;
double price_per_item;

public:
invoice(string partNumber, string partDescription, int quantity, double price_per_item)
{
    this->partNumber=partNumber;
    this->partDescription=partDescription;
    this->quantity=quantity;
    this->price_per_item=price_per_item;
}

void setpartNumber(string partNumber)
{
    this->partNumber=partNumber;
}
string getpartNumber()
{
    return partNumber;
}

void setpartDescription(string partDescription)
{
    this->partDescription=partDescription;
}

string getpartDescription()
{
    return partDescription;
}
void setquantity(int quantity)
{
    if(quantity>0)
    this->quantity=quantity;
    else
    this->quantity=0;
}

int getquantity()
{
    return quantity;
}

void setprice_per_item(double price_per_item)
{
     if (price_per_item >0)
        this->price_per_item= price_per_item;
    else
        this->price_per_item = 0.0;
}
double getprice_per_item()
{
    return price_per_item;
}

double getInvoiceAmount()
{
    return quantity*price_per_item;
}

};
int main()
{
    invoice i1("KS12","gloss",5,800.0);

    cout<<"Part number:"<<i1.getpartNumber()<<endl;
     cout<<"Part Descripton:"<<i1.getpartDescription()<<endl;
    cout<<"Quantity:"<<i1.getquantity()<<endl;
    cout<<"Price per item is:"<<i1.getprice_per_item()<<endl;
    cout<<"Invoice amount is: "<<i1.getInvoiceAmount()<<endl;

    cout<<endl;

    i1.setquantity(10);
    i1.setprice_per_item(1000);
    cout<<"New values are\n";
    cout<<"Quantity:"<<i1.getquantity()<<endl;
    cout<<"Price per item is:"<<i1.getprice_per_item()<<endl; 
    cout<<"Invoice amount is: "<<i1.getInvoiceAmount()<<endl;
  
    cout<<endl;

    i1.setquantity(-2);
    i1.setprice_per_item(-20.00);   
    cout<<"New values are\n";
    cout<<"Quantity:"<<i1.getquantity()<<endl;
    cout<<"Price per item is:"<<i1.getprice_per_item()<<endl;

    cout<<"Invoice amount is: "<<i1.getInvoiceAmount();

}