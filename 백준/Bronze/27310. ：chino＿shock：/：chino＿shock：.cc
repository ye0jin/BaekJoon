#include <iostream>
using namespace std;
int main()
{
    string s;
    int cnt1=0,cnt2=0;
    
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='_')cnt1++;
        else if(s[i]==':') cnt2++;
    }
    
    cout<<s.length()+cnt2+cnt1*5;
    return 0;
}