#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> database;
    
    while (n--) {
        string username;
        cin >> username;
        
        if (database[username] == 0) {
            cout << "OK\n";
        } else {
            cout << username << database[username] << "\n";
        }
        database[username]++;
    }
    
    return 0;
}
