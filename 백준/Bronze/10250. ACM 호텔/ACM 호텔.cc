
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c;
	
	for (int i = 0; i < n; i++) 
	{
		cin >> a >> b >> c;
		if (c % a== 0) cout << a * 100 + (c / a) << endl;
		else cout << (c % a) * 100 + (c / a) + 1 << endl;
	}

	return 0;
}

