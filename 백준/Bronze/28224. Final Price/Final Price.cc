#include <iostream>
using namespace std;
int main()
{
    int n,a,ans=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        ans+=a;
    }
    
    cout<<ans;
    return 0;
}