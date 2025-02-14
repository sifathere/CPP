#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (char &c : s) {
            if (c == 'p') {
                c = 'q';
            } else if (c == 'q') {
                c = 'p';
            }
        }

        reverse(s.begin(), s.end());

        cout << s << endl;
    }
    return 0;
}
