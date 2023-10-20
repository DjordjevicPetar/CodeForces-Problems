#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int length, num_of_queries;
		string s;
		cin >> length >> num_of_queries >> s;
		while (num_of_queries--) {
			int i, j;
			cin >> i >> j;
			i--; j--;
			if (find(s.begin(), s.begin() + i, s[i]) != s.begin() + i ||
				find(s.begin() + j + 1, s.end(), s[j]) != s.end())cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}