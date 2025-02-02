#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, p, q, level;
    cin >> n;
    
    set<int> levels;

    cin >> p;
    while (p--) {
        cin >> level;
        levels.insert(level);
    }

    cin >> q;
    while (q--) {
        cin >> level;
        levels.insert(level);
    }

    cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}
