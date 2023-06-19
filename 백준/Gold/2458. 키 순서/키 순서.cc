#include <iostream>
#include <string.h>

using namespace std;

int n,m;
int a[1000][1000];
int visit[5000];

int check(int v,int what)
{
    int num=0;
    for(int i=1;i<=n;i++)
    {
        if(!visit[i]&&a[v][i]==what)
        {
            visit[i]=1;
            ++num;
            num+=check(i,what); // 리턴되는 값 더하기
        }
    }
    return num;
}
int main()
{
    int cnt=0;

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        a[v1][v2]=1;
        a[v2][v1]=-1;
    }

    for(int i=1;i<=n;i++)
    {
        if(check(i,1)+check(i,-1)==n-1) cnt++;
        memset(visit,0,sizeof(visit));
    }
    cout<<cnt;

    return 0;
}
