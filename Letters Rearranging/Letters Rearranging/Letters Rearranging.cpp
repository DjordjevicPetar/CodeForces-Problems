#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string s;
		cin >> s;
		if (s.length() == count(s.begin(), s.end(), s[0]))cout << -1 << endl;
		else if (mismatch(s.begin(), s.end(), s.rbegin(), s.rend()).first != s.end())cout << s << endl;
		else {
			int i = 1;
			char temp;
			while (s[0] == s[i])i++;
			temp = s[i];
			s[i] = s[0];
			s[0] = temp;
			cout << s << endl;
		}
	}
}