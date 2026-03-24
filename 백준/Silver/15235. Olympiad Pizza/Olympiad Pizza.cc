#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<pair<int, int>> q;
    int n;
    cin >> n;

    int ans[1001] = {};
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        q.push(make_pair(i, input));
    }

    while (!q.empty()) {
        cnt++;
        int index = q.front().first;
        int pizza = q.front().second - 1;
        q.pop();    
        if (pizza > 0) {
            q.push(make_pair(index, pizza));
        }
        else {
            ans[index] = cnt;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
}