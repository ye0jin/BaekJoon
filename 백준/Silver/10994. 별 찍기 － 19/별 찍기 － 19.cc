#include <iostream>
using namespace std;
char ans[400][400] = {};

// 재귀
void helper(int n, int x, int y) {
	if (n <= 0) return; // 1까지만 돌리기

	int m = n * 4 - 3;
	
	for (int i = 0;i < m;i++) {
		ans[y + i][x] = '*'; // 위쪽 *
		ans[y][x + i] = '*'; // 아래 *
		ans[m - 1 + y][x + i] = '*'; // 왼 *
		ans[y + i][m + x - 1] = '*'; // 오 *
	} 
	helper(n - 1, x + 2, y + 2);
}

int main() {
	int n;
	cin >> n;
	int m = n * 4 - 3;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < m;j++) {
			ans[i][j] = ' ';
		}
	} 
	helper(n, 0, 0); 
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < m;j++) {
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;
}
