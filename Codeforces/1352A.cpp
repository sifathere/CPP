#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> parts;
    int place = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit > 0) {
            parts.push_back(digit * place);
        }
        n /= 10;
        place *= 10;
    }

    cout << parts.size() << endl;
    for (int num : parts) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
