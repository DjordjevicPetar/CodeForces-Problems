#include <iostream>
using namespace std;

//num + floor(num / 2) * 2 + floor(num / 3) * 2  5 -> 5 + 4 + 2
int main()
{
	int test_cases;
	long upper_limit;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> upper_limit;
		cout << (long)(upper_limit + floor(upper_limit / 2.0) * 2 + floor(upper_limit / 3.0) * 2) << '\n';
	}
}