#include <iostream>
using namespace std;
int main()
{
    int t, n, a;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        int cnt = 0;
        for(int j=0;j<n;++j)
        {
            cin>>a;
            cnt+=a;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}