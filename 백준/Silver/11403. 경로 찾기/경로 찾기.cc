#include<iostream>
#include<cstring>
using namespace std;

int arr[101][101], n;
int visit[101];

void DFS(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[x][i] == 1 && visit[i] == 0)
        {
            visit[i] = 1;
            DFS(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        memset(visit, 0, sizeof(int) * 101);
        DFS(i);
        for (int j = 0; j < n; j++)
        {
            if (visit[j])
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }cout << '\n';
    }
    return 0;
}
