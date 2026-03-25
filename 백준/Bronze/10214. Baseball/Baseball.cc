#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	
	for (int i = 0;i < n ;++i)
	{
		int cnt1, cnt2;
		cnt1 = cnt2 = 0;
		for (int j = 0;j < 9;j++) {

			int a, b;
			cin >> a >> b;
			cnt1 += a;
			cnt2 += b;
		}

		if (cnt1 > cnt2)
			cout << "Yonsei\n";
		else if (cnt2 > cnt1)
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}

	return 0;
} 