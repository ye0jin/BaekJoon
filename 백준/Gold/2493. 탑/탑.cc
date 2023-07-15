#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

stack<int> st;
stack<int> st2;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int a;
		scanf("%d", &a);
		while (!st.empty())
		{
			// st top (가로막힌 쪽) 이 입력 받은 값 (새 탑) 클 경우
			if (st.top() > a)
			{
				cout << st2.top() << " ";
				break;
			}
			// 아닐 경우 팝
			else
			{
				st.pop();
				st2.pop();
			}
		}

		if (st.empty()) cout << 0 << ' ';

		st.push(a);
		st2.push(i);
	}

	return 0;
}