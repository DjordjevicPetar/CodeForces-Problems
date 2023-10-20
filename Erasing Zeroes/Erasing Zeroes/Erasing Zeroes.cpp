#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string s;
		cin >> s;
		if (s.find('1') == s.npos)
		{
			cout << 0 << endl;
			continue;
		}
		cout << s.find_last_of('1') - s.find('1') - count(s.begin(), s.end(), '1') + 1 << endl;
	}
}

