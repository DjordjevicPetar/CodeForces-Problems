#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Change() {
	int len, cost_same, cost_diff, zeroes = 0, ones = 0, cost = 0;
	char temp;
	vector<int> arr;
	cin >> len >> cost_diff >> cost_same;
	getchar();
	for (int i = 0; i < len; i++)
	{
		temp = getchar();
		arr.push_back(temp - 48);
	}
	getchar();
	for (int i = 0; i < len; i++)
	{
		cin >> temp;
		if(arr[i] != (temp - 48))
			switch (arr[i])
			{
			case 0: zeroes++; break;
			case 1: ones++; break;
			}
	}
	if ((zeroes + ones) % 2)return -1;
	if (cost_same < cost_diff) {
		cost += cost_same * (zeroes / 2 + ones / 2);
		zeroes %= 2;
		ones %= 2;
		cost += zeroes * cost_diff;
	}
	else {
		int minimum = min(zeroes, ones);
		cost += cost_diff * minimum;
		zeroes -= minimum;
		ones -= minimum;
		cost += max(zeroes, ones) / 2 * cost_same;
	}
	return cost;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << Change() << endl;
	}
}