#include <iostream>
#include <stack>
using namespace std;

struct st
{
	int score, time;
};
int main()
{
	int n;
	int a, t, score = 0;
	cin >> n; // 몇 분기인지 알려줌

	stack<st> sta;

	for (int i = 0; i < n; i++) // 분기만큼 for문
	{
		int j;
		cin >> j;
		if (j == 1) // 0 일 경우 과제 없음 (pushX)
		{
			cin >> a >> t;
			sta.push({ a,t });
		}

		if(!sta.empty()) { // 스택에 뭐가 있음
			--sta.top().time; // 타임 빼줌
			if (sta.top().time == 0) // 만약 과제 다 했을 경우
			{
				score += sta.top().score; // score 늘리기
				sta.pop(); // 다 했으니 빼줌
			}
		}
	}

	cout << score;
	return 0;
}