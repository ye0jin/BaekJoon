#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;
    
    if(a+b==c) ans=1;
    else if(a+c==b) ans=1;
    else if(b+c==a) ans=1;
    
    cout<<ans;
    
    return 0;
}