#include <iostream>
#include <string>
#include <set>
using namespace std;

void main()
{
	int n, k, min = 1000000;
	string s;
	cin >> n >> k >> s;
	set<char> distinct{ s.begin(), s.end() };
	if (distinct.size() != k)
	{
		cout << "0" << endl;
		return;
	}
	for (char ch : distinct)if (min > count(s.begin(), s.end(), ch))min = count(s.begin(), s.end(), ch);
	cout << min * k << endl;
}

