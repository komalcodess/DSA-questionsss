#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;
public:

complex()
{

    real=0;
    img=0;
}

complex(int real, int img)
{
    this->real=real;
    this->img=img;
}

complex operator+(complex c2)
{
    complex c3;
    c3.real=real+c2.real;
    c3.img=img+c2.img;
    return c3;
}

complex operator-(complex c2)
{
    complex c3;
    c3.real=real-c2.real;
    c3.img= img- c2.img;
}

bool operator==(complex c2)
{
    if(real==c2.real && img==c2.img)
    return true;
    else 
    return false;
}

void display()
{
    if (img >= 0)
            cout<<real << "+" << img <<"i"<< endl;
        else
            cout<<real << "-" << -img << "i"<< endl;

    cout << endl;
}
};

int main()
{
    complex c1(12,13), c2(3,16);

    complex c3,c4;

    cout<<"After addition: ";
    c3=c1+c2;
    c3.display();

    cout<<"After subtraction: ";
    c4=c1-c2;
    c4.display();

    if(c1==c2)
    cout<<"Equal complex numbers";
    else
    cout<<"Unequal complex numbers";
}