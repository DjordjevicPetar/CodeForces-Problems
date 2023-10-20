#include <iostream>
#include <vector>
using namespace std;

int Possible_Halves(int n) {
	int i;
	for (i = 0; (n / 2) * 2 == n; i++)n /= 2;
	return i;
}

void Program() {
	int div_by_2 = 0, length, twos_in_length = 0;
	vector<int> arr(32, 0);
	cin >> length;
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		div_by_2 += Possible_Halves(temp);
	}
	if (div_by_2 >= length)
	{
		cout << "0" << endl;
		return;
	}
	div_by_2 -= length;
	for (int i = 2; i <= length; i += 2)arr[Possible_Halves(i)]++;
	int i = 31, count = 0, enough;
	while (div_by_2 < 0 && i > 0)
	{
		enough = -floor(((double)div_by_2) / i);
		if (enough > arr[i])count += arr[i];
		else count += enough;
		div_by_2 += arr[i] * i;
		i--;
	}
	if (div_by_2 >= 0)cout << count << endl;
	else cout << "-1" << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}