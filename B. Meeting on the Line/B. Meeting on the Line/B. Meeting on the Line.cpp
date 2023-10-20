#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double Solve() {
	int people, left_max, right_max, first_max_pos = 0, second_max_pos = 0;
	double cur_pos = 0, first_max, second_max;
	vector<int> positions, time;
	cin >> people;
	positions.reserve(people);
	time.reserve(people);
	for (int i = 0, temp; i < people; i++)
	{
		cin >> temp;
		positions.push_back(temp);
	}
	for (int i = 0, temp; i < people; i++)
	{
		cin >> temp;
		time.push_back(temp);
	}
	if (people == 1)return positions[0];
	
	while (1)
	{
		first_max = 0;
		second_max = 0;
		for (int i = 0; i < people; i++)
		{
			if (first_max <= time[i] + abs(cur_pos - positions[i])) {
				second_max = first_max;
				second_max_pos = first_max_pos;
				first_max = time[i] + abs(cur_pos - positions[i]);
				first_max_pos = i;
			}
			else if (second_max <= time[i] + abs(cur_pos - positions[i])) {
				second_max = time[i] + abs(cur_pos - positions[i]);
				second_max_pos = i;
			}
		}
		int max_index, min_index;
		if (positions[first_max_pos] > positions[second_max_pos]) {
			max_index = first_max_pos;
			min_index = second_max_pos;
		}
		else {
			min_index = first_max_pos;
			max_index = second_max_pos;
		}
		if (first_max == second_max && cur_pos > positions[min_index] && cur_pos < positions[max_index])return cur_pos;
		cur_pos = (time[max_index] + positions[max_index] + positions[min_index] - time[min_index]) / 2.0;
	}
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

