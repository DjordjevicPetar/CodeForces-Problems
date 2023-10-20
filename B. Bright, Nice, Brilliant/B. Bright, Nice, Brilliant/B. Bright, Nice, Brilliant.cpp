#include <iostream>
using namespace std;

void Problem() {
	int len;
	cin >> len;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)cout << "1 ";
			else cout << "0 ";
		}
		cout << endl;
	}
}

int main()
{
    int test_cases;
    cin >> test_cases;
	while (test_cases--)
	{
		Problem();
	}
}
