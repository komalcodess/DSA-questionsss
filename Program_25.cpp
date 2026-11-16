
#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

int main()
{
    list<int> myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);

    cout << "the list elements are: ";
    for (int x:myList)
        cout << x << " ";
    cout << endl;

    myList.pop_front();
    myList.pop_back();

    cout << "After deletion: ";
    for (int x:myList)
        cout<< x<< " ";
    cout <<endl;

    myList.insert(myList.begin(), 15);

    cout << "After insertion: ";
    for (int x: myList)
        cout << x<< " ";
    cout <<endl;

    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(1000);
    numbers.push_back(3430);

    cout << "\nVector elements are: ";
    for (int x :numbers)
        cout << x<< " ";
    cout <<endl;

    numbers.pop_back();

    cout << "After pop back: ";
    for (int x :numbers)
        cout << x << " ";
    cout << endl;

    numbers.insert(numbers.begin() + 1, 15);

    cout << "After insertion: ";
    for (int x :numbers)
        cout << x << " ";
    cout << endl;

    numbers.erase(numbers.begin());

    cout << "After erasing first element: ";
    for (int x :numbers)
        cout << x << " ";
    cout << endl;


    map<int, string> friends;

    friends[1] = "komal";
    friends[2] = "akansha";
    friends[3] = "ashish";

    cout << "\nMap elements are:" << endl;

    for (auto x : friends)
        cout << x.first << " " << x.second << endl;

    friends.erase(2);

    cout << "\nMap after deletion:" << endl;

    for (auto x : friends)
        cout << x.first << " " << x.second << endl;

    cout << "Value at key 1: " << friends.at(1) << endl;

 
}
