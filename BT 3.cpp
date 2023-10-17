#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Nhap so: ";
    cin >> n;
    while (n != 0)
    {
        sum += n;
        cout << "Nhap so: ";
        cin >> n;
    }
    cout << "Tong cac so vua nhap la: " << sum;
    return 0;
}

