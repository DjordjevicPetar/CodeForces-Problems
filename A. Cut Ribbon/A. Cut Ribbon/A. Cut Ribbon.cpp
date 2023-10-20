#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int length;
	int possible_parts[3];
	cin >> length >> possible_parts[0] >> possible_parts[1] >> possible_parts[2];
	vector<long long> max_cuts(length + 1, -1);
	max_cuts[0] = 0;
	for (int i = 0; i < length; i++)
	{
		if (max_cuts[i] == -1)continue;
		for (int j = 0, k; j < 3; j++) {
			k = i + possible_parts[j];
			if (k <= length && max_cuts[k] < max_cuts[i] + 1)max_cuts[k] = max_cuts[i] + 1;
		}
	}
	cout << max_cuts[length];
}