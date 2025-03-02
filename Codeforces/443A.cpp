#include <iostream>
#include <set>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    set<char> letters;
    for (char ch : s) {
        if (islower(ch)) {
            letters.insert(ch);
        }
    }

    cout << letters.size() << endl;
    return 0;
}
