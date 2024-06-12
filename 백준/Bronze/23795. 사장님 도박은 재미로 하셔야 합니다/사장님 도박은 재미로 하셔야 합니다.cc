#include <iostream>
using namespace std;
int main()
{
    long long int cnt = 0;
    int a;
    while(true)
    {
        cin>>a;
        if(a==-1) break;
        cnt+=a;
    }
    cout<<cnt;
    return 0;
}