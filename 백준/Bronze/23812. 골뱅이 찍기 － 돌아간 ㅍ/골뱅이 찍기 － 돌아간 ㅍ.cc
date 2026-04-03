#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n * 5;
	for (int i = 0;i < m;++i) {
		int center = i / n; // 센터 확인 (0~4)
		if(center == 1 || center == 3) { // 
			for (int j = 0;j < m;j++) {
				cout << "@";
			}
		}
		else {
			for (int j = 0;j < n;j++) { 
				cout << "@";
			}
			for (int j = 0; j < n * 3;j++) {
				cout << " ";
			}
			for (int j = 0;j < n;j++) {
				cout << "@";
			}
		}
		cout << endl;
	}
	return 0;
}