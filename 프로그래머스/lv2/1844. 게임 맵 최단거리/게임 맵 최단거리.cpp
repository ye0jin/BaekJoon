#include<vector>
#include <queue>
using namespace std;

struct st {
    int x, y;
    int cnt;
};
int dirx[4] = { 1,0,-1,0 };
int diry[4] = { 0,1,0,-1 };
int v[101][101] = {};
queue<st> q;
int solution(vector<vector<int>> maps)
{
    int n = maps[0].size(); // 열 사이즈
    int m = maps.size(); // 행 사이즈
    v[0][0] = 1;
    q.push({ 0,0,1 });

    while (!q.empty())
    {
        int x1 = q.front().x;
        int y1 = q.front().y;
        int cnt1 = q.front().cnt;
        q.pop();

        if (x1 == m - 1 && y1 == n - 1) return cnt1;

        for (int i = 0; i < 4; ++i) {
            int nx = x1 + dirx[i];
            int ny = y1 + diry[i];

            if (nx < 0 || nx >= m || ny >= n || ny < 0 || maps[nx][ny] == 0 || v[nx][ny] == 1) continue;

            q.push({ nx,ny,cnt1 + 1 });
            v[nx][ny] = 1;
        }    
    }
    return -1;
}