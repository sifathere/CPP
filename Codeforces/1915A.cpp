#include<iostream>
using namespace std;

int findodd(int a, int b, int c)
{
    return a^b^c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<findodd(a,b,c)<<endl;
    }
}
