#include <iostream>
#include <vector>

using namespace std;
struct st {
	char left, right;
};
vector<st> v(256);

void A(char node)
{
	if (node == '.')
	{
		return;
	}

	cout << node;
	A(v[node].left);
	A(v[node].right);
}
void B(char node)
{
	if (node == '.')
	{
		return;
	}

	B(v[node].left);
	cout << node;
	B(v[node].right);
}
void C(char node)
{
	if (node == '.')
	{
		return;
	}

	C(v[node].left);
	C(v[node].right);
	cout << node;
}
int main()
{
	int n;
	cin >> n;
	char a, b, c;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
		v[a].right = c;
		v[a].left = b;
	}

	A('A');
	cout << '\n';
	B('A');
	cout << '\n';
	C('A');
	cout << '\n';
	return 0;
}