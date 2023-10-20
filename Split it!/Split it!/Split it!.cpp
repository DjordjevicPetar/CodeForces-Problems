#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int n, k;
		string s;
		string::iterator front, back;
		cin >> n >> k >> s;
		front = s.begin();
		back = s.end() - 1;
		while (k--)
		{
			if (*front != *back || distance(front, back) < 2)break;
			front++; back--;
		}
		cout << ((k == -1) ? "YES" : "NO") << endl;
	}
}
