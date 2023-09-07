#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(string begin, string target, vector<string> words) {
    int n = words.size();
    int m = begin.size();

    vector<int> visited;
    visited.resize(n, 0);

    queue<pair<string, int>> q;
    q.push({ begin,0 });

    while (!q.empty()) {
        string s = q.front().first;
        int cnt = q.front().second;
        if (s == target) return cnt;
        q.pop();

        for (int i = 0; i < n; i++) {
            int differ = 0;
            if (visited[i] == 0) {
                for (int j = 0; j < m; j++) {
                    if (s[j] == words[i][j]) continue;
                    differ++;
                }
                if (differ == 1) {
                    visited[i] = 1;
                    q.push({ words[i], cnt + 1 });
                }
            }
        }
    }
    return 0;
}