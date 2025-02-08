#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int score, max, min, count = 0;
    cin >> score;
    
    max = min = score;

    for (int i = 1; i < n; i++) {
        cin >> score;
        
        if (score > max) {
            max= score;
            count++;
        } else if (score < min) {
            min = score;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
