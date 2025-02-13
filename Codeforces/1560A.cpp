#include<iostream>
using namespace std;

int find(int k)
{
    int count = 0, num = 1;
    while (true)
    {
        if(num%3 != 0 && num%10 != 3)
        {
            count++;
            if(count ==k)
            {
                return num;
            }
        }
        num++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<find(k)<<endl;
    }
    return 0;
}
