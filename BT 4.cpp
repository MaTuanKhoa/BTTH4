#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout << "UCLN cua hai so la: " << a;
    return 0;
}

