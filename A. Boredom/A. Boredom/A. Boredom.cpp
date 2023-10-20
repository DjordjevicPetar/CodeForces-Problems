#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void main()
{
	int length;
	long long remain = 0;
	map<int, long long> occ;
	vector<pair<int, long long>> arr;
	cin >> length;
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		occ[temp] += temp;
	}
	for (pair<int, long long> item : occ)arr.push_back(item);
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i].first - arr[i - 1].first != 1) {
			remain = (remain > arr[i - 1].second) ? remain : arr[i - 1].second;
			arr[i].second += remain;
		}
		else {
			arr[i].second += remain;
			remain = (remain > arr[i - 1].second)?remain:arr[i - 1].second;
		}
	}
	cout << ((remain > arr.back().second) ? remain : arr.back().second);
}