#include <iostream>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int n, odd = 0, even = 0, x;
		cin >> n >> x;
		for (int i = 0, temp; i < n; i++)
		{
			cin >> temp;
			if (temp % 2)odd++;
			else even++;
		}
		if (!odd) {
			cout << "No" << endl;
			continue;
		}
		odd--;
		x--;
		x -= (((odd > x) ? x : odd) / 2) * 2;
		if (x - even > 0)cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}