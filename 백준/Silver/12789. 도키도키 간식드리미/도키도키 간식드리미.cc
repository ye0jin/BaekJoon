#include <iostream>
#include <stack>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, v;
	cin >> n;
	stack<int> st;
	int num = 1;//현재 순번 (순서대로 먹어야 하니..)
	for (int i = 0; i < n; i++) {
		cin >> v;

		if (v == num) num++; // 다음순번
		else st.push(v); // 아닐 경우 push

		while (!st.empty() && st.top() == num)//제일 위에 있는 애가 순번과 일치할 경우
		{
			st.pop();//빼주고
			num++;//다음순번
		}
	}
	if (st.empty()) cout << "Nice";
	else cout << "Sad";
	return 0;
}
