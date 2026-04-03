#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int main()
{
	int n,d=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a == 0)
		{
			st.pop();
			continue;
		}
		
		st.push(a);
	}
	while (!st.empty())
	{
		d += st.top();
		st.pop();
	}
	cout << d;
	return 0;
}