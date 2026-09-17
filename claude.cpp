#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int val = 0) : value(val) {}

    // a. Unary minus operator overloading
    Number operator-() {
        return Number(-value);
    }

    // b. Pre-increment (++obj)
    Number operator++() {
        ++value;
        return *this;
    }

    // b. Post-increment (obj++)
    Number operator++(int) {
        Number temp = *this;   // save original value
        value++;
        return temp;
    }

    // c. Pre-decrement (--obj)
    Number operator--() {
        --value;
        return *this;
    }

    // c. Post-decrement (obj--)
    Number operator--(int) {
        Number temp = *this;   // save original value
        value--;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(5);

    cout << "Original value: ";
    n1.display();

    // Unary minus
    Number n2 = -n1;
    cout << "After unary minus (-n1): ";
    n2.display();

    // Pre-increment
    ++n1;
    cout << "After pre-increment (++n1): ";
    n1.display();

    // Post-increment
    Number n3 = n1++;
    cout << "n3 (value before increment): ";
    n3.display();
    cout << "n1 (value after post-increment): ";
    n1.display();

    // Pre-decrement
    --n1;
    cout << "After pre-decrement (--n1): ";
    n1.display();

    // Post-decrement
    Number n4 = n1--;
    cout << "n4 (value before decrement): ";
    n4.display();
    cout << "n1 (value after post-decrement): ";
    n1.display();

    return 0;
}