#include <iostream>
#include <list>
using namespace std;

int Kedane(list<int> arr) {
	int global_max = -1, local_max = 0;
	for (; arr.size(); arr.pop_front())
	{
		local_max = arr.front() + ((local_max > 0) ? local_max : 0);
		if (global_max < local_max)global_max = local_max;
	}
	return global_max;
}

int main()
{
	int length, input, num_of_ones = 0;
	list<int> arr;
	cin >> length;
	while (length--)
	{
		cin >> input;
		if (input)num_of_ones++;
		arr.push_back(((input) ? -1 : 1));
	}
	cout << num_of_ones + Kedane(arr);
}
