#include <iostream>
using namespace std;
long long SameDifference() {
	int len, arr[400002] = {0}, max = 0, min = INT32_MAX;
	long long sum = 0;
	cin >> len;
	for (int i = 0, temp; i < len; i++) {
		cin >> temp;
		arr[temp - i + 200001]++;
		if (max < temp - i + 200001)max = temp - i + 200001;
		if (min > temp - i + 200001)min = temp - i + 200001;
	}
	for (int i = min; i <= max; i++)
	{
		if (arr[i] == 0)continue;
		sum += ((long long)arr[i]) * (arr[i] - 1) / 2;
	}
	return sum;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)cout << SameDifference() << endl;
}