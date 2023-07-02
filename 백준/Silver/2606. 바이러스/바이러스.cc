#include <iostream>

int n;
int e;
int map[500][500];
int visit[500];
int cnt;

using namespace std;

void check(int v)
{
    visit[v] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (map[v][i] == 1 && !visit[i])
        {
            cnt++;
            check(i);
        }
    }
}

int main()
{
    int start = 1; // 시작 정점
    int v1, v2;

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        map[v1][v2] = 1;
        map[v2][v1] = 1; 
    }

    check(start);
    cout << cnt;

    return 0;
}