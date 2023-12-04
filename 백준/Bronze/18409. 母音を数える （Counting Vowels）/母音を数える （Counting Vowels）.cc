#include <iostream>
using namespace std;
int main()
{
    int n, cnt=0;
    char a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a=='a'||a=='i'||a=='o'||a=='u'||a=='e') cnt++;
    }
    
    cout<<cnt;
}