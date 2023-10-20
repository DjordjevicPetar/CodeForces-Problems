#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void Program() {
	int index, min = INT32_MAX;
	int count[] = { 0 , 0 ,0 };
	string s;
	cin >> s;
	for (int i = 0, j = 0; i < s.length(); i++)
	{
		count[s[i] - '1']++;
		if (any_of(count, count + 3, [](int i) {return i == 0; }))continue;
		while (none_of(count, count + 3, [](int i) {return i == 0; }))count[s[j++] - '1']--;
		if (i - j + 2 < min)min = i - j + 2;
	}
	cout << ((min == INT32_MAX) ? 0 : min) << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}
