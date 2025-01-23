#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int gifts[n + 1];

    for (int i = 1; i <= n; ++i) {
        int giver;
        cin >> giver;
        gifts[giver] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << gifts[i] << " ";
    }
    cout << endl;

    return 0;
}
