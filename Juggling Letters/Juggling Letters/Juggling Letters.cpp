#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Check() {
	int number_of_strings;
	string all = "";
	cin >> number_of_strings;
	for (int i = 0; i < number_of_strings; i++)
	{
		string temp;
		cin >> temp;
		all += temp;
	}
	sort(all.begin(), all.end());
	if (all.size() % number_of_strings != 0)
	{
		cout << "NO" << endl;
		return;
	}
	while (all != "")
	{
		if (all[0] != all[number_of_strings - 1])
		{
			cout << "NO" << endl;
			return;
		}
		all.erase(0, number_of_strings);
	}
	cout << "YES" << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		Check();
	}
}