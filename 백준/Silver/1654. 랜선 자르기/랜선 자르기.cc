
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	int k, n;
	long long int high=0, low = 1, mid, ans=0, cnt;
	int a[10001] = {};

	cin >> k >> n; // 가지고 있는/필요한
	for (int i = 0; i < k;i++)
	{
		cin >> a[i];
		if (high < a[i]) high = a[i];
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		cnt = 0; // 초기화

		for (int i = 0; i < k; i++)
		{
			cnt += a[i] / mid;
		}
		
		if (cnt >= n) { // 만들수있는>=요구값
			low = mid + 1; // 늘려도됨
			if (ans < mid) ans = mid; // 최대
		}
		else high = mid - 1; // 만들수있는<요구값 -> 길이 줄임
	}
	cout << ans;
	return 0;
}