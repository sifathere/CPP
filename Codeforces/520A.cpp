#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> letters;
    for (char c : s) {
        letters.insert(tolower(c));
    }

    cout << (letters.size() == 26 ? "YES" : "NO") << endl;
    return 0;
}
