#include<iostream>
using namespace std;

class users
{
private:
    int units;
    string name;

public:
    void setdetails()
    {
        cout<<"Enter the name: ";
        cin>>name;

        cout<<"Enter the units consumed: ";
        cin>>units;
    }

    int uunits()
    { return units;
    }

    void display(float bill)
    {


 cout<<"\nName: "<<name;
        cout<<"\nUnits: "<<units;
        cout<<"\nBill: "<<bill<<endl;
    }
};

float calculatebill(int units)
{
    float bill=0;

    if(units<=100)
        bill=units*0.6;
    else if(units<=300)
        bill=(100*0.6)+((units-100)*0.8);
    else
        bill=(100*0.6)+(200*0.8)+((units -300 )*0.9);

    bill=bill+50;

    if(bill>300)
        bill=bill+(bill*0.15);
return bill;
}

int main()
{
    int n;
    float bill;

 
   cout<<"Enter number of users: ";
    cin>>n;
    users arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nUser "<<i+1<<endl;
        arr[i].setdetails();
    }

    cout<<"\nThe details are as follows\n";
    for(int i=0;i<n;i++)
    {bill=calculatebill(arr[i].uunits());
        arr[i].display(bill);
        cout<<endl;
    }
}