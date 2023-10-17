#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    while (n <= 0)
    {
        cout << "n phai la so nguyen duong. Nhap lai: ";
        cin >> n;
    }
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
    }
    return 0;
}

