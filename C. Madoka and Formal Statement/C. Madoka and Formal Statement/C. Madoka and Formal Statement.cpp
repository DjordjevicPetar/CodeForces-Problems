#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_of_test, size, flag, min, max;
    cin >> num_of_test;
	while (num_of_test--)
	{
		flag = 0;
		min = 1000000000;
		max = 0;
		cin >> size;
		vector<int> first (size, 0);
		vector<int> second (size, 0);
		for (int i = size - 1; i >= 0; i--) {
			cin >> first[i];
			max = (max < first[i]) ? first[i] : max;
		}
		for (int i = size - 1; i >= 0; i--) {
			cin >> second[i];
			min = (min > second[i]) ? second[i] : min;
		}
		if (max >= min)for (int i = 0; i < size; i++)first[i] = (first[i] > min) ? first[i] : min;
		for (int i = 0; i < size; i++)
		{
			if (i == 0 && first[0] < second[0] && first[size - 1] >= second[0] - 1)first[0] = second[0];
			else if (first[i] < second[i] && first[(i) ? i - 1 : size - 1] >= second[i] - 1)first[i] = second[i];
			if (first[i] != second[i]) {
				flag = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if (!flag)cout << "YES" << endl;
	}
}