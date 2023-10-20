#include <iostream>
#include <array>
using namespace std;

long long Solve() {
	int length, cost;
	long long total = 0;
	array<int, 101> arr = { 0 };
	cin >> length >> cost;
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		arr[temp]++;
	}
	for (int i = 0; i < 101; i++)total += min(arr[i], cost);
	return total;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << Solve() << endl;
	}
}