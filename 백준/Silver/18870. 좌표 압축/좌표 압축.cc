#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int> vec2(n);

	int a = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		vec2[i] = vec[i];
	}

	sort(vec.begin(), vec.end()); // 오름차순 정렬 후
	vec.erase(unique(vec.begin(), vec.end()), 
		vec.end()); // 중복 제거

	for (int i = 0; i < n; i++)
	{
		int iter = lower_bound(vec.begin(), vec.end(), vec2[i]) - vec.begin();
		cout << iter << " ";
	}

	return 0;
}