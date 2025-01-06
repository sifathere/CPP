#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, a, b, passenger=0, min=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;

        passenger = passenger - a + b;
        if(passenger>min)
            min = passenger;
    }
    cout<<min;
}
