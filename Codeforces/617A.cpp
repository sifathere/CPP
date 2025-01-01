#include<iostream>
using namespace std;

int main()
{
    int steps,x;
    cin>>x;

    if(x%5==0)
    {
        steps = x/5;
    }
    else
    {
        steps = x/5+1;
    }

    cout<<steps;
    
}
