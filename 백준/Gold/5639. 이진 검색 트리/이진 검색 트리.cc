#include <iostream>
#include <vector>

int v[999999];
using namespace std;
void A(int n, int m)
{
	if (n >= m) return; // 첫번째가 끝보다 크면 리턴
	if (n == m - 1) // 첫번째 == 끝-1
	{
		cout << v[n] << '\n';
		return;
	}
	
	int a = n + 1; // 시작 다음 거부터 검사
	while (a < m) // 끝보다 작을 때까지 계속 반복
	{
		if (v[n] < v[a]) { // 원래가... 다음 거보다 작으면 탈출
			break;
		}
		a++; // 다음 인뎃스 계속 검사
	}
	A(n + 1, a);
	A(a, m);
	cout << v[n] << '\n';
}
int main()
{
	int value, a=0;
	while (cin >> value)
	{
		v[a++] = value;
	}
	A(0, a); // 첫번째랑 끝부분
	return 0;
}