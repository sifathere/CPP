#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int tLeft = 240-k;
    int Totaltime=0, solved=0;
    
    for(int i=1;i<=n;i++)
    {
        Totaltime += 5*i;

        if(Totaltime<=tLeft)
            solved++;
    }

    cout<<solved;

    return 0;
}
