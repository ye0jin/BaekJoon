#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

struct st
{
    int x,y;
    int cnt;
};
queue <st> q;

int a[1005][1005],n,m,day;
int dirx[5]={1,-1,0,0};
int diry[5]={0,0,1,-1};

void check()
{
    while(!q.empty())
    {
        int x1=q.front().x;
        int y1=q.front().y;
        int cnt1=q.front().cnt;

        day=cnt1;

        q.pop();

        for(int i=0;i<4;i++)
        {
            int nx=x1+dirx[i];
            int ny=y1+diry[i];

            if(nx>=0&&nx<n&&ny>=0&&ny<m&&a[nx][ny]==0)
            {
                a[nx][ny]=1;
                q.push({nx,ny,cnt1+1});
            }
        }
    }
}
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                q.push({i,j,0});
            }
        }
    }

    check();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }

    cout<<day;

    return 0;
}
