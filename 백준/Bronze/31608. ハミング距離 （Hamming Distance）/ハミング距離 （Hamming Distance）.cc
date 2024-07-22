#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cnt = 0;
	string a,b;
	cin>>a>>b;
	
	for(int i=0;i<n;++i)
	{
		if(a[i] != b[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}