#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int x)
    {
        this->x = x;
    }

    // Unary -
    void operator-()
    {
        x = -x;
    }

    // Pre-increment ++
    void operator++()
    {
        ++x;
    }

    // Post-increment ++
    void operator++(int)
    {
        x++;
    }

    // Pre-decrement --
    void operator--()
    {
        --x;
    }

    // Post-decrement --
    void operator--(int)
    {
        x--;
    }

    void display()
    {
        cout << x;
    }
};

int main()
{
    A a1(5);

    cout << "Original value: ";
    a1.display();

    -a1;
    cout << "\nAfter unary - : ";
    a1.display();

    ++a1;
    cout << "\nAfter pre-increment: ";
    a1.display();

    a1++;
    cout << "\nAfter post-increment: ";
    a1.display();

    --a1;
    cout << "\nAfter pre-decrement: ";
    a1.display();

    a1--;
    cout << "\nAfter post-decrement: ";
    a1.display();

    return 0;
}