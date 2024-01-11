#include <iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ans+=a;        
    }
    cout<<ans;
    return 0;
}