#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[n];
    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenIndex = i + 1;
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    if (evenCount == 1) {
        cout << evenIndex << endl;
    } else {
        cout << oddIndex << endl;
    }

    return 0;
}
