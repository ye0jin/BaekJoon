#include <iostream>
#include <stack>
using namespace std;
int main()
{
	string s;
	int cnt = 1;
	int ans = 0;

	cin >> s;
	stack<char> st;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(')
		{
			cnt *= 2; // () 안의 거는 2
			st.push(s[i]);
		}
		else if (s[i] == '[')
		{
			cnt *= 3;
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (st.empty() || st.top() != '(') // 안됨
			{
				cout << 0;
				return 0;;
			}

			if (s[i - 1] == '(') // 바로 전이 올바른거
			{
				ans += cnt;
			}
			cnt /= 2;
			st.pop();
		}
		else if (s[i] == ']')
		{
			if (st.empty() || st.top() != '[') // 안됨
			{
				cout << 0;
				return 0;;
			}
			
			if (s[i - 1] == '[') // 바로전
			{
				ans += cnt;
			}

			cnt /= 3;
			st.pop();
		}
	}
	if (!st.empty())
	{
		ans = 0;
	}
	cout << ans;
	return 0;
}