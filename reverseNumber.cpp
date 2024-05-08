#include <iostream>
using namespace std;

int rev(int num)
{
    int revNumb = 0;
    while (num > 0)
    {
        int temp = num % 10;
        revNumb = revNumb * 10 + temp;
        num = num / 10;
    }
    return revNumb;
}

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    int reverse = rev(num);
    cout << reverse;
    return 0;
}