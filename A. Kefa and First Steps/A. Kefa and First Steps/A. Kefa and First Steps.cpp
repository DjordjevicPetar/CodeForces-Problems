#include <iostream>
using namespace std;

int main()
{
	int num_of_elements, max = 0, cur = 0, input, last = -1;
	cin >> num_of_elements;
	for (int i = 0; i < num_of_elements; i++)
	{
		cin >> input;
		if (input >= last)max = (max < ++cur) ? cur : max;
		else cur = 1;
		last = input;
	}
	cout << max;
}