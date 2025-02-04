#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int heights[n];

    int maxIdx = 0, minIdx = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        if (heights[i] > heights[maxIdx]) maxIdx = i;
        if (heights[i] <= heights[minIdx]) minIdx = i;
    }

    int swaps = maxIdx + (n - 1 - minIdx);

    if (maxIdx > minIdx) swaps--;

    cout << swaps << endl;
    return 0;
}
