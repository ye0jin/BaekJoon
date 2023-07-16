#include <iostream>

using namespace std;
long long int mem[1500050]={0,1};
long long int mod=1000000;

void f()
{
    mem[0]=0;
    mem[1]=1;
    for(int i=2;i<=1500000;++i)
    {
        mem[i]=mem[i-1]+mem[i-2];
        mem[i]%=mod;
    }
}
int main()
{
    long long int n;
    cin>>n;
    f();
    cout<<mem[n%1500000];
    return 0;
}