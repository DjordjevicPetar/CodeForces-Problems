#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main()
{
	int length, questions;
	string song;
	cin >> length >> questions >> song;
	int sums[100001];
	sums[0] = 0;
	for (int i = 0; i < song.size(); i++)sums[i + 1] = sums[i] + song[i] + 1 - 'a';
	while (questions--)
	{
		int from, to, answer;
		cin >> from >> to;
		cout << sums[to] - sums[from - 1]<< endl;
	}
}
