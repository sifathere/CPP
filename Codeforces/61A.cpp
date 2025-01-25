#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, result = "";
    cin >> s1 >> s2;

    for (size_t i = 0; i < s1.length(); i++) {
        result += (s1[i] == s2[i]) ? '0' : '1';
    }

    cout << result << endl;
    return 0;
}
