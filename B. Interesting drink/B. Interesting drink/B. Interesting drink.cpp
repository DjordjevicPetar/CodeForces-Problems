#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Binary_Search(vector<int>& arr, int size, int value) {
	int low = size / 2;
	if (value >= arr[size - 1])return size;
	if (value < arr[0])return 0;
	for (int i = 2; !(arr[low - 1] <= value && arr[low] > value); i++)
	{
		low += size / pow(2, i) * (arr[low - 1] > value) ? -1 : 1;
	}
	return low;
}

int main()
{
	int num_of_shops, num_of_days, money, last = -1, last_low = -1;
	cin >> num_of_shops;
	vector<int> prices(num_of_shops);
	for (int i = 0; i < num_of_shops; i++)cin >> prices[i];
	sort(prices.begin(), prices.end());
	cin >> num_of_days;
	last = num_of_shops / 2;
	while (num_of_days--)
	{
		cin >> money;
		cout << Binary_Search(prices, num_of_shops, money) << "\n";
	}
}