
#include <iostream>
using namespace std;

template <class T>
class list
{
    T arr[167];
    int size;

public:
    list()
    {
        size =0;
    }

    void insert(T value)
    {
        arr[size] =value;
        size++;
    }

    void remove()
    {
        if (size==0)
        {
            cout<< "the list is empty." << endl;
        }
        else
        {
            size--;
        }
    }

    void display()
    {
        cout << "list elements are: ";

        for (int i =0; i <size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    list<int> l1;

    cout << "Integer list:" << endl;

    l1.insert(10);
    l1.insert(20);
    l1.insert(30);

    l1.display();

    l1.remove();
    cout<<"After deletion"<<endl;
    l1.display();

    cout << "\nCharacter list:" << endl;

    list<char> l2;

    l2.insert('K');
    l2.insert('O');
    l2.insert('M');
    l2.insert('S');

    l2.display();

    cout<<"After deletion"<<endl;
    l2.remove();
    l2.display();

    return 0;
}
