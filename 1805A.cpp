#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            //inputs
        
        int total_xor =0;
        for(int i=0;i<n;i++)
            total_xor ^= a[i]; // xor of all elements in the array
        
        if(n%2 == 1) //if n is odd
            cout<<total_xor<<endl;
        else //if n is odd
        {
            if(total_xor == 0)
                cout<<total_xor<<endl;
            else 
                cout<<-1<<endl;
        }
    }
}
