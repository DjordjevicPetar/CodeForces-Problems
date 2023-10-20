#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(string::iterator first, string::iterator last) {
	int sum = 0;
	for_each(first, last, [&](int n) {sum += n; });
	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int length, i, j;
		string number;
		cin >> length >> number;
		for (j = length - 1; j > 0; j--)if (number[j] % 2 == 1)break;
		for (i = 0; i < j; i++)if (number[i] != '0' && sum(number.begin() + i, number.end()) % 2 == 0)break;
		cout << ((i != j) ? number.substr(i, j - i + 1) : "-1") << endl;
	}
}
