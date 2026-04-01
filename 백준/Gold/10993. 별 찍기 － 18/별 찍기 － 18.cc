#include <iostream>
#include <math.h>

using namespace std;
char ans[2056][2056] = {};

void helper(int n, int x, int y) {
	if (n <= 0) { 
		return;
	}

	int height = (pow(2, n) - 1);
	int width = 2 * height - 1;
	int next = n - 1;
	int gap = pow(2, next);

	if (n % 2 == 0) { // 짝수일 경우 역삼각형 
		for (int i = 0;i < height;++i) {
			if (i == 0) { // 윗변
				for (int j = 0;j < width; ++j) {
					ans[x][j + y] = '*';
				}
				continue;
			}  
			ans[i + x][i + y] = '*'; // 왼  
			ans[i + x][y + width - (i+1)] = '*'; // 오
		}
		// x가 높이고 y가 변의 길이임!!ㅜㅜ
		// 여기는 한 칸 더 내려야하네
		helper(next, x + 1, gap + y); // 중앙 위에서 삼각형 시작
	}
	else { // 홀수일경우 삼각형
		for (int i = 0;i < height;++i) {
			if (i == height - 1) { // 밑변
				for (int j = 0;j < width;++j) {
					ans[x + i][j + y] = '*';
					continue;
				}
			}

			ans[x + i][y + width / 2 - i] = '*'; // 왼
			ans[x + i][y + width / 2 + i] = '*'; // 오
		}
		// x는 gap 보다 한 칸 더 올려야함
		helper(next, gap + x - 1, gap + y); // 중앙 아래에서 역삼각형 시작 
	} 
}
int main() {
	int n;
	cin >> n;

	int height = pow(2, n) - 1;
	int width = 2 * height - 1;
	for (int i = 0;i < height;++i) {
		for (int j = 0;j < width;j++) {
			ans[i][j] = ' ';
		}
	}

	helper(n, 0, 0);
	for (int i = 0; i < height; ++i) {
		if (n % 2 == 1) { // 홀수
			for (int j = 0; j <= width / 2 + i; ++j) {
				cout << ans[i][j];
			}
		}
		else { // 짝수
			for (int j = 0; j < width - i; ++j) {
				cout << ans[i][j];
			}
		}
		cout << endl;
	}
	
	return 0;
}