#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        map<int, int> frequency_map;
        for(int i = 0; i < n; i++)
            frequency_map[a[i]]++;
        
        if(frequency_map.size() > 2)
            cout << "NO" << endl;
        else
        {
            int freq_1 = frequency_map.begin()->second;
            int freq_2 = frequency_map.rbegin()->second;
            
            if(frequency_map.size() == 1)
                cout << "YES" << endl;
            else if(abs(freq_1 - freq_2) <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
