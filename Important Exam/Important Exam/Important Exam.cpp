#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num_of_tests, num_of_questions, sum = 0;
	vector<string> test;
	cin >> num_of_tests >> num_of_questions;
	test.resize(num_of_tests);
	for (int i = 0; i < num_of_tests; i++)cin >> test[i];
	for (int i = 0; i < num_of_questions; i++)
	{
		int points, guessed[] = { 0,0,0,0,0 };
		cin >> points;
		for (int j = 0; j < num_of_tests; j++)guessed[test[j][i] - 65]++;
		sum += points * *max_element(guessed, guessed + 5);
	}
	cout << sum << endl;
}