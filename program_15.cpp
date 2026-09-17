#include <iostream>
using namespace std;

class A
{
    int x =5;

public:

    int operator-()
    {
        return -x;
    }

    int operator++()
    {
        return x + 1;
    }

    int operator++(int no_use)
    {
        return x + 1;
    }

    int operator--()
    {
        return x - 1;
    }

    int operator--(int no_use)
    {
        return x - 1;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    A a1;

    cout << "Original value: ";
    a1.display();

    cout << "For unary -: ";
    cout << -a1 <<endl;

    cout << "For pre-increment: ";
    cout << ++a1 <<endl;

    cout << "For post-increment: ";
    cout << a1++<< endl;

    cout << "For pre-decrement: ";
    cout << --a1<<endl;

    cout << "For post-decrement: ";
    cout << a1-- <<endl;

    return 0;
}