
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of elements: ";
    cin >>n;

    vector<int> v(n);

    cout<<"Enter the vector elements: ";
    for (int i =0; i <n; i++)
    {
        cin >>v[i];
    }

    int pos;
    cout<<"Enter the position to delete: ";
    cin >>pos;

    v.erase(v.begin() + pos - 1);
    int start, end;
    cout << "Enter the range to delete: ";
    cin >>start >>end;

    v.erase(v.begin() + start - 1, v.begin() + end - 1);

    cout << "\nNumber of remaining elements: " << v.size() << endl;

    cout << "Updated vector is: ";
    for (int x : v)
    {
        cout <<x << " ";
    }
    cout << endl;

    return 0;
}
