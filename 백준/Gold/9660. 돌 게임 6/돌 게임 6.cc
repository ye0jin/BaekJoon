
#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;

	// 1->1
	// 2->0
	// 3->1
	// 4->1
	// 5->1
	// 6->1
	// 7->0
	// 8->1 
	// 9->0
	// 10->1
	// 11->1
	//12 -> 1
	// 13->1
	// 14->0
	// 15 -> 1
	// 16->0

	if (n % 7 == 2 || n % 7 == 0) cout << "CY";
	else cout << "SK";


	// 2, 4, 5
}
