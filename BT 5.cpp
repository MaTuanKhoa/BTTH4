#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (1 + i * i);
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
