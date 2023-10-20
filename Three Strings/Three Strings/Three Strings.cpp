#include <iostream>
#include <string>
using namespace std;

bool Check(string a, string b, string c) {
	for (int i = 0, length = a.length(); i < length; i++)
	{
		if (a[i] != c[i] && b[i] != c[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string a, b, c;
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> a >> b >> c;
		cout << ((Check(a, b, c)) ? "YES" : "NO") << endl;
	}
}
