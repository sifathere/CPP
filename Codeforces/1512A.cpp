#include <iostream>
#include <vector>
using namespace std;

int findSpy(const vector<int>& a) {
    int n = a.size();
    if (a[0] != a[1] && a[0] != a[2]) 
        return 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) 
            return i + 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findSpy(a) << endl;
    }
    return 0;
}
