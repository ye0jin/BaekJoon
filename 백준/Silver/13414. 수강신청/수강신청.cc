//#include <iostream>
//#include <unordered_set>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int main()
//{
//	int n, m;
//	string a;
//	cin >> n >> m;
//	unordered_set<string> s;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a;
//		if (s.find(a) != s.end()) s.erase(a);
//		s.insert(a);
//	}
//
//	int check = 0;
//	vector<string> ans;
//	for (auto i : s)
//	{
//		if (check > n - 1) break;
//		ans.push_back(i);
//		check++;
//	}
//
//	//cout << endl;
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++) cout << ans[i] << '\n';
//
//	return 0;
//}

#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

bool sort2(const pair<string, int>& a, const pair<string, int>& b) 
{
	return a.second < b.second;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	unordered_map<string, int> map;
	for (int i = 0; i < m; i++)
	{
		string a;
		cin >> a;
		map[a] = i;
	}

	vector<pair<string,int>> vec;
	for (auto i : map)
	{
		vec.push_back(i);
	}

	//cout << endl;
	sort(vec.begin(), vec.end(), sort2);
	
	int k = 0;
	if (vec.size() > n) k = n;
	else k = vec.size();
	
	for (int i = 0; i < k; i++)
	{
		cout << vec[i].first << '\n';
	}

	return 0;
}