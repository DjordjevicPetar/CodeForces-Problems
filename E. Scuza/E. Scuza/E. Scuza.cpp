#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Program() {
	int num_of_elems, num_of_quest;
	vector<pair<int, long long>> arr = {make_pair(0, 0)};
	cin >> num_of_elems >> num_of_quest;
	for (int i = 0, temp; i < num_of_elems; i++)
	{
		cin >> temp;
		if (temp <= arr.back().first)arr.back().second += temp;
		else arr.push_back(make_pair(temp, arr.back().second + temp));
	}
	for (int i = 0, temp; i < num_of_quest; i++)
	{
		cin >> temp;
		if (temp == 0) {
			cout << 0 << ' ';
			continue;
		}
		auto a = upper_bound(arr.begin(), arr.end(), temp, [](int num, pair<int, long long> member) {return member.first > num; });
		cout << a[-1].second << ' ';
	}	cout << endl;
}

int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)Program();
}
