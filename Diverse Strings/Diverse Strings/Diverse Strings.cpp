#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_diverse() {
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	for (int i = 1, length = str.size(); i < length; i++)if (str[i] - str[i - 1] != 1)return false;
		return true;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << ((is_diverse()) ? "YES" : "NO") << endl;
	}
}
