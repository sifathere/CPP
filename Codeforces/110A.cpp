#include <iostream>
using namespace std;

int main() {
    long long num;
    int luckyCount = 0;

    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        if (digit == 4 || digit == 7) {
            luckyCount++;
        }
        num /= 10;
    }

    if (luckyCount == 4 || luckyCount == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
