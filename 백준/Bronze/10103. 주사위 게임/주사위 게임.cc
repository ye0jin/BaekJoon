#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    
    int cnt1, cnt2;
    cnt1=cnt2=100; //창, 상
    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        if(a>b)
        {
            cnt2-=a;
        }
        else if(a<b)
        {
            cnt1-=b;
        }
    }
    
    cout<<cnt1<<"\n"<<cnt2;
    return 0;
}