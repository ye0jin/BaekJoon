#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0;i < n;++i) {
		int a;
		string str;
		cin >> a;
		cin.ignore();
		getline(cin, str);
		 
		str.erase(str.begin() + (a-1));
		cout << str << endl;
	}
}