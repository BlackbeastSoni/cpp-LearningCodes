#include <iostream>
using namespace std;
int main()
{
    int numb;
    cout << "Enter a Number" << endl;
    cin >> numb;
    int i;
    for (i = 2; i < numb; i++)
    {
        if (numb % i == 0)
        {
            cout << "The number " << numb << " is not a Prime Number";
            break;
        }
    }
    if (i == numb)
    {
        cout << "The number " << numb << " is a Prime Number";
    }

    return 0;
}