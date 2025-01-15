#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> luckynum={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<luckynum.size();i++)
    {
        if(n%luckynum[i]==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
