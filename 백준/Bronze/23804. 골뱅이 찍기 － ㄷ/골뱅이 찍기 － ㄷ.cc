#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n * 5;
	for (int i = 0;i < m;++i) {
		for (int j = 0;j < m;++j) { 
			if (j < n) {
				cout << "@"; 
			}
			else if (i < n || i > m - n - 1) {
				cout << "@";
			} 
		}
		cout << endl;
	}
	return 0;
}