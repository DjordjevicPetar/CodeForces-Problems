#include <iostream>
#include <vector>
using namespace std;

long long Max_Sum() {
	long long num_of_inputs, length, sum = 0;
	cin >> num_of_inputs >> length;
	vector<long long> arr;
	for (int i = 0; i < length; i++)arr.push_back(INT_MIN);
	for (int i = 0, temp; i < num_of_inputs; i++)
	{
		cin >> temp;
		if (arr[i % length] < temp)arr[i % length] = temp;
	}
	for (int i = 0; i < length; i++)sum += arr[i];
	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << Max_Sum() << endl;
	}
}