
#include <iostream>
using namespace std;

class cal_area
{
protected:
    float r;
    float h;

public:
    void getdata()
    {
        cout<<"Enter the radius: ";
        cin>>r;

        cout <<"Enter height: ";
        cin>>h;
    }

    virtual void display() = 0;
};

class cylinder : public cal_area
{
public:
    void display()
    {
        cout << "The Volume of Cylinder is: "
             << 3.14 *r*r*h << endl;
    }
};

class hemisphere : public cal_area
{
public:
    void display()
    {
        cout << "the Volume of Hemisphere is: "
             << (2.0 /3) * 3.141*r*r*r << endl;
    }
};

class cone : public cal_area
{
public:
    void display()
    {
        cout << "The volume of Cone is: "
             << (1.0 /3) * 3.14 *r*r*h << endl;
    }
};

int main()
{
    cylinder cy1, cy2;
    hemisphere he1, he2;
    cone c1, c2;

    cout << "first cylinder:" << endl;
    cy1.getdata();
    cy1.display();

    cout << "\n second cylinder:" << endl;
    cy2.getdata();
    cy2.display();

    cout << "\n first emisphere :" << endl;
    he1.getdata();
    he1.display();

    cout << "\nsecond Hemisphere :" << endl;
    he2.getdata();
    he2.display();

    cout << "\nfirst cone:" << endl;
    c1.getdata();
    c1.display();

    cout << "\n second cone:" << endl;
    c2.getdata();
    c2.display();

}
