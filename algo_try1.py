#include <iostream>

using namespace std;

long long sumOfEvenNumbers(int n) {
    long long returnValue = 0;
    for (int i = 0; i <= n; i++)
        if (i % 2 == 0) {
            returnValue += i;
        }
    return returnValue;
}

int main () {
    int n;
    cin >> n;
    cout << sumOfEvenNumbers(n) << endl;
    return 0;
