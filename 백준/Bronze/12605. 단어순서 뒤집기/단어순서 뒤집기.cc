#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		stack<string> s;	
		string ans, input, temp;
		getline(cin, input);

		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == ' ')
			{
				s.push(temp);
				s.push(" ");
				temp = "";
			}
			else
			{
				temp += input[j];
			}
		}
		s.push(temp);

		while (!s.empty())
		{
			ans+= s.top();
			s.pop();
		}

		cout << "Case #" << i + 1 << ": ";
		cout << ans;
		cout << '\n';
	}

	return 0;
 }