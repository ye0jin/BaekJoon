#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<2) cout<<"Before";
    else if(a>2) cout<<"After";
    else //2
    {
        if(b<18) cout<<"Before";
        else if(b>18) cout<<"After";
        else cout<<"Special";
    }
    return 0;
}