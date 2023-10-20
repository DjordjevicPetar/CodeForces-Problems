#include <iostream>
using namespace std;

long long Alternating_Sum() {
	long long len, sum = 0, max = 0, sign = 1;
	cin >> len;
	for (int i = 0, temp; i < len; i++) {
		cin >> temp;
		if (temp * sign < 0) {
			sum += max;
			max = temp;
			sign = (sign == 1) ? -1 : 1;
		}
		else {
			if (max < temp)max = temp;
		}
	}
	return sum + max;
}

int main()
{
    int test_cases;
    cin >> test_cases;
	while (test_cases--)
	{
		cout << Alternating_Sum() << endl;
	}
}