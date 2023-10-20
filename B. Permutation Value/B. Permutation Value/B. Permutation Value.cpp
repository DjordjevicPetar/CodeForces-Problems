#include <iostream>
using namespace std;

void Program() {
	int max;
	cin >> max;
	for (int i = 1; i <= max; i += 2)cout << i << ' ';
	for (int i = (max % 2)?max - 1:max; i > 0; i -= 2)cout << i << ' ';
	cout << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}