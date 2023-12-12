#include <iostream>
#include <stdio.h>
#include <algorithm>
 
using namespace std;
int n, home[101][101];
void check(int i,int j,int &cnt)
{
    if(i<0 || j<0 || j>=n || i>=n || home[i][j]==0) return;
 
    home[i][j]=0;
    ++cnt;
    check(i,j+1,cnt);
    check(i,j-1,cnt);
    check(i+1,j,cnt);
    check(i-1,j,cnt);
}
int main()
{
    int a[500], cnt=0, c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%1d",&home[i][j]);
    }
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(home[i][j]==1)
            {
                check(i,j,cnt);
                a[c]=cnt;
                cnt=0;
                c++;
            }
        }
    }
    cout<<c<<endl;
 
    sort(a,a+c);
    for(int i=0;i<c;i++)
    {
        cout<<a[i] << endl;
    }
    return 0;
}