
#include <iostream>
using namespace std;

class Shape
{
protected:
    double x;
    double y;

public:
    void getdata()
    {
        cout<<"enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
    }

    virtual void display()
    {

        cout << "The area is: " << x * y << endl;
    }
};

class Triangle : public Shape
{
public:
    void display()
    {
        cout << "The area of Triangle is: " << 0.5 * x * y << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display()
    {
        cout << "The area of Rectangle is: " << x * y << endl;
    }
};

int main()
{
    Triangle t1, t2, t3;
    Rectangle r1, r2, r3;

    cout << "First triangle:" << endl;
    t1.getdata();
    t1.display();

    cout << "\nsecond Triangle :" << endl;
    t2.getdata();
    t2.display();

    cout << "\nfirst rectangle:" << endl;
    r1.getdata();
    r1.display();

    cout << "\nsecond rectangle:" << endl;
    r2.getdata();
    r2.display();

 
}
