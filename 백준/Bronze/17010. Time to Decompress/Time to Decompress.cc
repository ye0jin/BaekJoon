#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    char c;
    for(int i=0;i<n;++i)
    {
        cin>>a>>c;
        for(int i=0;i<a;++i)
        {
            cout<<c;
        }
        cout<<'\n';
    }
    return 0;
}