#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s;
	stack<char> st;
	getline(cin, s);

	for (int j = 0; j < s.length(); j++)
	{
		if (s[j] == '<')
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			while (s[j] != '>')
			{
				cout << s[j];
				j++;
			}
			cout << s[j];
			//j++;
			//continue;
		}
		else if (s[j] == ' ')
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}

			cout << " ";
		}
		else
		{
			st.push(s[j]);
		}
	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}

	cout << '\n';
}