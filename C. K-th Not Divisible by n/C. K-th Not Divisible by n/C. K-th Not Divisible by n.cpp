#include <iostream>
using namespace std;
int main()
{
	cout << fixed;
	cout.precision(0);
    int test_cases, n, k;
    cin >> test_cases;
	while (test_cases--)
	{
		cin >> n >> k;
		cout << k + floor((k - 1) / (n - 1)) << endl;
	}
}
