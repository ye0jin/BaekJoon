#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a;
    int cnt = 1,ans=0;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(a=='L')
        {
            if(cnt>1) cnt--;
        }
        else if(a=='R')
        {
            if(cnt<3) cnt++;
        }
        
        if(cnt==3) ans++;
    }
    cout<<ans;
    return 0;
}