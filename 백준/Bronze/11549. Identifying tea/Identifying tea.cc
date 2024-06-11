#include <iostream>
using namespace std;
int main()
{
    int n, a, cnt = 0;
    cin>>n;
    for(int i=0;i<5;++i)
    {
        cin>>a;
        if(n==a) cnt++;
    }
    cout<<cnt;
    return 0;
}