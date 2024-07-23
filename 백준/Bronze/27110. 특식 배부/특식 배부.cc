#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin>>n;
    int a;
    for(int i=0;i<3;++i)
    {
        cin>>a;
        if(a-n>0) cnt+=n;
        else cnt+=a;
    }
    
    cout<<cnt;
    
    return 0;
}