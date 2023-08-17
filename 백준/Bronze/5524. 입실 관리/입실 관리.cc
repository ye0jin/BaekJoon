#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
        }
        cout<<a<<'\n';
    }
    return 0;
}