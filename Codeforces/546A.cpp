#include<iostream>
using namespace std;

int main()
{
    int k,n,w,b=0;
    cin>>k>>n>>w;
    
    for(int i=1; i<=w; i++)
    {
        b+=k*i;
    }
    if(b>n)
        cout<<b-n<<endl;
    else
        cout<<0;
    
}
