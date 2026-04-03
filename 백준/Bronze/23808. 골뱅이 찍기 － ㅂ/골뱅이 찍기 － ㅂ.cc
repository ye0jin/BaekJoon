#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n * 5;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < m;++j) {
			if ((i >= 2 * n && i < 3 * n) || i >= m - n || j < n || j >= m - n) {
				cout << "@"; 
			} 
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}