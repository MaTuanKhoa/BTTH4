#include <iostream>
using namespace std;
int main()
{
    int n, gt = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        gt *= i;
    cout << n << "! = " << gt;
    return 0;
}

