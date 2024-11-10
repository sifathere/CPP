
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cout << "How many random numbers do you want in your txt file? " << endl;
    cin >> n;

    ofstream outFile("outFile.txt");
    for (int i = 0; i < n; i++) {
        outFile << 1 + rand() % 100 << endl;
    }
    outFile.close();

    ifstream inFile("outFile.txt");
    int arr[n];
    for (int i = 0; i < n; i++) {
        inFile >> arr[i];
    }
    inFile.close();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    ofstream sortedFile("Sorted.txt");
    for (int i = 0; i < n; i++) {
        sortedFile << arr[i] << "\t";
    }
    sortedFile.close();

    cout << "Unsorted and sorted arrays are saved in 'outFile.txt' and 'Sorted.txt' respectively." << endl;
    return 0;
}
