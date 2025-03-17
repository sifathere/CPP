#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k * l) / nl;
    int totalLimeSlices = c * d;
    int totalSalt = p / np;

    cout << min({totalDrink, totalLimeSlices, totalSalt}) / n << endl;
    return 0;
}
