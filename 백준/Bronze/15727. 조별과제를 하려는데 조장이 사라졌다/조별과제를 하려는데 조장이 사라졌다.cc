#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v=n/5;
    int c=n%5;
    if(c!=0) v++;
    cout<<v;
    return 0;
}