#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Enter the size of the vector: ";
    int n;
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Enter x: ";
    int x;
    cin >> x;

    int occurrence = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurrence = i;
            break;
        }
    }

    cout << "Last occurrence of " << x << " is in index: " << occurrence << endl;
    return 0;
}
