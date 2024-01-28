#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int cnt0=0,cnt1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        m==0?cnt0++:cnt1++;
    }
    if(cnt0>cnt1)
    {
        cout<<"Junhee is not cute!";
    }
    else
    {
        cout<<"Junhee is cute!";
    }
}