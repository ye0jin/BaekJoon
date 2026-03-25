#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;

	int a[101] = {}; 
	for (int i = 0;i < n;++i) {
		cin >> a[i];
	}

	sort(a, a+n);  
	int man = ((n + 1) / 2) - 1;
	int gan = (n + 1) / 2;

	for (int i = 0;i < n;++i) {
		if (i % 2 == 0)
			cout << a[man--] << " ";
		else 
			cout<< a[gan++] <<" ";
	}
	return 0;
}