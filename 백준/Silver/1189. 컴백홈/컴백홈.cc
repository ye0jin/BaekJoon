#include <iostream>
using namespace std;

char a[6][6] = {};
int r, c, k;
int ans;

void DFS(int i, int j, int dis) {
    if (i < 0 || i >= r || j < 0 || j >= c || a[i][j] == 'T' || dis > k) return;
    if (dis == k && i == 0 && j == c - 1) { // 거리가 k이고 집에 도착한 경우
        ans++;
        return;
    }
    a[i][j] = 'T';
    DFS(i, j + 1, dis + 1);
    DFS(i, j - 1, dis + 1);
    DFS(i - 1, j, dis + 1);
    DFS(i + 1, j, dis + 1);
    a[i][j] = '.';
}

int main() {
    cin >> r >> c >> k;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    DFS(r - 1, 0, 1);

    cout << ans;
    return 0;
}
