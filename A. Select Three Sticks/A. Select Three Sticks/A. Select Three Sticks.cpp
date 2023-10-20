#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Program() {
	int len, min = INT32_MAX;
	vector<int> arr;
	cin >> len;
	arr.reserve(len);
	for (int i = 0, temp; i < len; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 1; i < len - 1; i++)if (arr[i + 1] - arr[i - 1] < min)min = arr[i + 1] - arr[i - 1];
	return min;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << Program() << endl;
	}
}