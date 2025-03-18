#include <iostream>
using namespace std;

int main() {
    int n, officers = 0, untreated = 0;
    cin >> n;
    
    while (n--) {
        int event;
        cin >> event;
        if (event > 0) {
            officers += event;
        } else {
            if (officers > 0) {
                officers--;
            } else {
                untreated++;
            }
        }
    }
    
    cout << untreated << endl;
    return 0;
}
