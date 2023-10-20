#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int> memo;

int SolveFor(vector<int>& arr, int n) {
	int value = arr[n];
	auto index = memo.find(n);
	if (index != memo.end())return memo[n];
	if (n + value < arr.size())value += SolveFor(arr, value + n);
	memo[n] = value;
	return value;
}

void Program() {
	vector<int> arr;
	int length, max = 0;
	cin >> length;
	arr.reserve(length);
	memo.clear();
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	for (int i = 0, j; i < length; i++)
	{
		j = SolveFor(arr, i);
		if (j > max)max = j;
	}
	cout << max << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}