#include <iostream>
#include <algorithm>
using namespace std;

int findMedium(int a, int b, int c) {
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    return arr[1];
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << findMedium(a, b, c) << endl;

    }
    return 0;
}
