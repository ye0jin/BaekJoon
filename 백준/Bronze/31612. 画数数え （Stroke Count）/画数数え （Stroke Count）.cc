#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a;
    int cnt=0;
    
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(a=='o') cnt+=1;
        else cnt+=2;
    }
    cout<<cnt;
    return 0;
}