#include <iostream>

using namespace std;

int maxn,n;
int a[101][101],b[101][101];
int cnt,maxcnt;

void check(int i,int j)
{
    if(i<0||j<0||i>=n||j>=n||b[i][j]==0) return;

    b[i][j]=0;
    check(i+1,j);
    check(i-1,j);
    check(i,j+1);
    check(i,j-1);
}
int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
            if(maxn<a[i][j]) maxn=a[i][j];
        }
    }
    for(int k=0;k<maxn;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]>k) b[i][j]=1;
                else b[i][j]=0;
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]==1)
                {
                    check(i,j);
                    cnt++;
                }
            }
        }

        if(cnt>maxcnt) maxcnt=cnt;
        cnt=0;

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                b[i][j]=a[i][j];
    }

    cout<<maxcnt;

    return 0;
}
