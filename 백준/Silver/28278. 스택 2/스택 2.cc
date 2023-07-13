#include <iostream>
#include <stack>

using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
	int n;
	cin >> n;
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		
		if (input == 1)
		{
			int a;
			cin >> a;
			s.push(a);
		}
		else if (input == 2)
		{
			if (s.empty())
			{
				cout << "-1\n";
				continue;
			}
			
			cout << s.top() << '\n';
			s.pop();
		}
		else if (input == 3)
		{
			cout << s.size() << '\n';
		}
		else if (input == 4)
		{
			if (s.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (input == 5)
		{
			if (s.empty())
			{
				cout << "-1\n";
				continue;
			}

			cout << s.top() << '\n';
		}
	}
	return 0;
}