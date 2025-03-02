#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minTaxis(vector<int>& groups) {
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int group : groups) {
        if (group == 1) count1++;
        else if (group == 2) count2++;
        else if (group == 3) count3++;
        else if (group == 4) count4++;
    }

    int taxis = count4;

    taxis += count3;
    count1 = max(0, count1 - count3);

    taxis += count2 / 2;
    int remaining2 = count2 % 2;

    if (remaining2) {
        taxis += 1;
        count1 = max(0, count1 - 2);
    }

    taxis += (count1 + 3) / 4;

    return taxis;
}

int main() {
    int n;
    cin >> n;
    vector<int> groups(n);
    for (int i = 0; i < n; i++) {
        cin >> groups[i];
    }

    cout << minTaxis(groups) << endl;
    return 0;
}
