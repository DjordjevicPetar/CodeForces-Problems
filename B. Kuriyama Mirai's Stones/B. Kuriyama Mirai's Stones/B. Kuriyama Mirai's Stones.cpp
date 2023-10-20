#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int length, test_cases;
	vector<long long> arr, sum_until = { 0 }, sum_until_sorted = { 0 };
	cin >> length;
	{
		long long temp;
		for (int i = 0; i < length; i++)
		{
			cin >> temp;
			arr.push_back(temp);
			sum_until.push_back(temp + sum_until.back());
		}
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < length; i++)sum_until_sorted.push_back(arr[i] + sum_until_sorted.back());
	cin >> test_cases;
	{	
		int type, left, right;
		while (test_cases--)
		{
			cin >> type >> left >> right;
			if (type == 1)cout << sum_until[right] - sum_until[left - 1] << endl;
			else cout << sum_until_sorted[right] - sum_until_sorted[left - 1] << endl;
		}
	}
}
