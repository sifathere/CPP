#include<iostream>
using namespace std;

int main()
{
    int n, p;
    bool isHard = false;
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        if(p == 1)
        {
            isHard = true;
            break;
        }
    }
    
    if(isHard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
