#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Input(vector<string>& vec, int length) {
	string temp;
	for (int i = 0; i < length; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
}

int main()
{
	int n, m, test_cases, year;
	vector<string> s, t;
	cin >> n >> m;
	Input(s, n); Input(t, m);
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> year;
		cout << s[--year % s.size()] << t[year % t.size()] << endl;
	}
}

