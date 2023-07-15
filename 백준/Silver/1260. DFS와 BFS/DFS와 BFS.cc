#include <iostream>
#include <queue>

using namespace std;

int n, m;
int arr[1001][1001], visit[1001];
int start;

void DFS(int v)
{
    cout << v << " ";
    visit[v] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[v][i] == 1 && visit[i] == 0)
        {
            DFS(i);
        }
    }
}
void BFS(int v)
{
    queue<int> q;
    q.push(v);
    visit[v] = 0;

    while (!q.empty())
    {
        v = q.front();
        cout << v << " ";
        q.pop();

        for (int i = 0; i <= n; i++)
        {
            if (visit[i] == 1 && arr[v][i] == 1)
            {
                q.push(i);
                visit[i] = 0;
            }
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(NULL);
    cin >> n >> m >> start;
    int a, b;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }

    DFS(start);
    cout << '\n';
    BFS(start);

    return 0;
}