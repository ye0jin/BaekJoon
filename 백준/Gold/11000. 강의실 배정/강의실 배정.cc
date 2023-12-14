#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main()
{
	int n;
	vector<pair<int, int>> vec;
	priority_queue<int, vector<int>, greater<int>> q;
	int a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b; // 시작, 끝
		vec.push_back({ a,b });
	}

	sort(vec.begin(), vec.end()); // 시작하는 시간대로
	int cnt = 0;

	q.push(vec[0].second); // 끝나는 시간 넣어주기
	for (int i = 1; i < n; i++)
	{
		q.push(vec[i].second);
		// 가장 초반 끝나는 시간이랑 시작 시간이랑 비교
		if (q.top() <= vec[i].first) // 작거나 같을 경우 pop
		{
			q.pop();
		}
	}

	cout << q.size(); // 필요한 거
	return 0;
}