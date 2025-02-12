#include <iostream>
using namespace std;
int main()
{
   int n,a;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>a;
    int b=a/10, c=a%10;
    cout<<b+c<<endl;
   }

}
