#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    while (n--) {
        cin >> a >> b;
        int r = a % b;

        if (r == 0)
            cout << 0 << endl;
        else
            cout << (b - r) << endl;
    }

    return 0;
}
