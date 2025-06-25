#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n >> l;

    vector<double> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    double maxGap = 0;
    for (int i = 1; i < n; ++i)
        maxGap = max(maxGap, a[i] - a[i - 1]);

    double edgeLeft = a[0] - 0;
    double edgeRight = l - a[n - 1];

    double ans = max({maxGap / 2.0, edgeLeft, edgeRight});
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
