#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int lastPos = -1;
        for (int j = 0; j < s.length() - 1; j++) {
            if (s[j] == 'u' && s[j + 1] == 's') {
                lastPos = j;
            }
        }

        if (lastPos != -1) {
            s.replace(lastPos, 2, "i");
        }

        cout << s << endl;
    }

    return 0;
}
