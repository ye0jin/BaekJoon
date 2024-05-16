#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a[100001];
int visit[100001];
int ans[100001];
int cnt = 0;

void dfs(int x)
{
    visit[x] = 1;
    ans[x] = ++cnt;
    for (int i = 0; i < a[x].size(); i++)
    {
        if (visit[a[x][i]] == 0)
        {
            dfs(a[x][i]);
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
        sort(a[i].begin(), a[i].end(), greater<>());
    }

    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}
