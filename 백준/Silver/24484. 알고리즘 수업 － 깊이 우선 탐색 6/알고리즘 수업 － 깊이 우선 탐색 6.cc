#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a[100001];
long long int visit[100001],ans1[100001],ans2[100001],cnt = 0;

void dfs(int x, int depth)
{
    ans1[x] = depth;
    ans2[x] = ++cnt;
    visit[x] = 1;
    for (int i = 0; i < a[x].size(); i++)
    {
        if (visit[a[x][i]] == 0)
        {
            dfs(a[x][i], depth + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(a[i].begin(), a[i].end(),greater<>());
    }

    dfs(r, 0);

    long long int hap = 0;
    for (int i = 1; i <= n; i++)
    {
        hap += ans1[i] * ans2[i];
    }
    cout << hap;

    return 0;
}
