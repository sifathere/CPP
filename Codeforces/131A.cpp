#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool changeCase = true;
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            changeCase = false;
            break;
        }
    }

    if (changeCase) {
        for (char &c : s) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    cout << s << endl;
    return 0;
}
