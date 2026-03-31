#include <iostream> 
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;++i) {
		int tc; 
		cin >> tc;   
		int a = tc;
		int idx = 0;
		while (true) {
			if (a == 0) {
				break;
			} 
			if (a % 2 == 1) {
				cout << idx << " ";
				if (a == 1) {
					break;
				}
			} 
			a /= 2;
			++idx;
		} 
		 
		cout << endl;
	}
	return 0;
}