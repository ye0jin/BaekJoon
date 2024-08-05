#include <iostream>
using namespace std;
int main()
{
    int n,cnt = 0;
    cin>>n;
    char a[10001]={};
    char b;
    for(int i=0;i<n;++i) cin>>a[i];
    cin>>b;
    
    for(int i=0;i<n;++i)
    {
        if(b==a[i]) cnt++;
    }
    cout<<cnt;
    return 0;
}