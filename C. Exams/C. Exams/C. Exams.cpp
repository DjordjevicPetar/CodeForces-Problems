#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int length, cur_day = 0;
	vector<pair<int, int>> exams;
	cin >> length;
	exams.reserve(length);
	//Input
	for (int i = 0, first, second; i < length; i++)
	{
		cin >> first >> second;
		exams.push_back(make_pair(first, second));
	}
	sort(exams.begin(), exams.end(), [](pair<int, int> first, pair<int, int> second){
		return first.first < second.first || (first.first == second.first && first.second < second.second);
		});
	for (auto exam : exams)
	{
		if (cur_day <= exam.second)cur_day = exam.second;
		else cur_day = exam.first;
	}
	cout << cur_day << endl;
}