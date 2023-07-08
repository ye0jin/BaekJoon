#include <iostream>
#include <stack>

using namespace std;
int main()
{
	int n,a;
	cin >> n;

	stack<int> st;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		st.push(a);
	}
	int m = 0, cnt=0;
	while (!st.empty())
	{
		int t = st.top();
		st.pop();

		if (t > m)
		{
			cnt++;
			m = t;
		}
	}

	cout << cnt;
	return 0;
}