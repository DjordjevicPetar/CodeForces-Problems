#include <iostream>
using namespace std;

void Program() {
	int not_in;
	cin >> not_in;
	for (int i = 0, a; i < not_in; i++)cin >> a;
	cout << 3 * (10 - not_in) * (9 - not_in) << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}