#include <iostream>
using namespace std;

void League() {
	int players, x, y;
	cin >> players >> x >> y;
	if (x * y != 0 || x + y == 0) {
		cout << -1 << endl;
		return;
	}
	x = (x != 0) ? x : y;
	if ((players - 1) % x == 0) {
		for (int i = 0, k = 2; i < (players - 1) / x; i++, k += x)for (int j = 0; j < x; j++)cout << k << " ";
		cout << endl;
	}
	else cout << -1 << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)League();
}