#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year += 1;
        int d1 = year / 1000;
        int d2 = (year / 100) % 10;
        int d3 = (year / 10) % 10;
        int d4 = year % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 && 
            d2 != d3 && d2 != d4 && 
            d3 != d4) {
            break;
        }
    }

    cout << year << endl;

    return 0;
}
