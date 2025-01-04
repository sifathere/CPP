#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    if(count == 4 || count == 7)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
