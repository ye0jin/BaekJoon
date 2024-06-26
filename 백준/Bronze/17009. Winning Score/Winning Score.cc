#include <iostream>
using namespace std;
int main()
{
    int a1,b1,c1;
    int a2,b2,c2;
    
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    
    int cnt1=a1*3+b1*2+c1;
    int cnt2=a2*3+b2*2+c2;
    
    if(cnt1>cnt2) cout<<"A";
    else if(cnt1==cnt2) cout<<"T";
    else cout<<"B";
    return 0;
}