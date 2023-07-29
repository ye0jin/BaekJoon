//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	int n,group=0;
//	cin >> n;
//
//	string check[101];
//
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 0;
//		string a;
//		cin >> a;
//		sort(a.begin(), a.end());
//		check[i] = a;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (check[i] == check[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			group++;
//		}
//	}
//	cout << group;
//	return 0;
//}

#include <iostream>
#include <map>

using namespace std;
int main()
{
	int n;
	map<string, int> m;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		int b = a.length() - 6;
		string check = "";
		for (int j = b; j < a.length(); j++)
		{
			check += a[j];
		}

		if (check == "Cheese")
		{
			//cout << a;
			m[a]++;
		}
	}

	if (m.size() >= 4)
	{
		cout << "yummy";
	}
	else
	{
		cout << "sad";
	}

	return 0;
}