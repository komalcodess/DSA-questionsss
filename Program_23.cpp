
#include <iostream>
#include <stdexcept>
using namespace std;

int largestProperDivisor(int n)
{
    if (n ==0)
    {
        throw invalid_argument("Not defined for n is equal to 0");
    }

    if (n ==1)
        return 1;

    for (int i=n/2; i>=1; i--)
    {
        if (n%i ==0)
            return i;
    }

    return 1;
}

void processInput(int n)
{
    try
    {
        int k =largestProperDivisor(n);
        cout << "result is:"<<k<< endl;
    }
    catch (invalid_argument &e)
    {
        cout << e.what() << endl;
    }

    cout << "returning control flow." << endl;
}

int main()
{
    int n;

    cin >>n;

    processInput(n);

    return 0;
}
